#include "selector.h"
#include <getopt.h> // getopt_long, no_argument, required_argument, optarg, optind

// Print help message and exit
void print_help();
char* program_name;

int main(int argc, char** argv)
{
  // Command line options parsing
  program_name = argv[0];
  int next_option;

  // String with possible short options
  const char* const short_options = "h";

  // Array with possible long options
  const struct option long_options[] =
  {
     { "help", no_argument, NULL, 'h' }
    ,{ NULL, 0, NULL, 0 }
  };

  do
  {
    next_option = getopt_long(argc, argv, short_options, long_options, NULL);
    switch (next_option)
    {
      // -h or --help
      case 'h':
                print_help();
                return (EXIT_SUCCESS);
     // Incorrect option
     case '?':
               print_help();
               return (EXIT_FAILURE);
     // No more option
     case -1:
              break;
     // Something wrong
     default:
              abort();
    }
  }
  while (next_option != -1);
  // End of: Command line options parsing

  QApplication a(argc, argv);

  // Set Translator
  QTranslator translator;
  QString trans = QString(":/i18n/selector_") + QLocale::system().name() + ".qm";

  #ifndef QT_NO_DEBUG
    qDebug() << trans;
  #endif

  translator.load(trans);
  a.installTranslator(&translator);
  // end of: Set Translator

  // Set Style Sheet
  //QFile css_file(":/styles/skins/default.qss"); // Load from resource
  QFile css_file("skins/default.qss"); // Load from external file
  if (css_file.open(QIODevice::ReadOnly | QIODevice::Text))
  {
    QString css = css_file.readAll();
    a.setStyleSheet(css);

    #ifndef QT_NO_DEBUG
      css = a.styleSheet();
      qDebug() << css << endl;
    #endif
  }
  else
    qWarning() << QCoreApplication::translate("Selector", "Warning! Can't open skins/default.qss", nullptr) << endl;;
  // end of: Set Style Sheet

  Selector w;
  w.showMaximized();
  return a.exec();
}

// Print help message and exit
void print_help()
{

}
