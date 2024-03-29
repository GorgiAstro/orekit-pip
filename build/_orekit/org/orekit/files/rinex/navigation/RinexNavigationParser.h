#ifndef org_orekit_files_rinex_navigation_RinexNavigationParser_H
#define org_orekit_files_rinex_navigation_RinexNavigationParser_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class DataSource;
    }
    namespace time {
      class TimeScales;
    }
    namespace files {
      namespace rinex {
        namespace navigation {
          class RinexNavigation;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          class RinexNavigationParser : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_init$_b6b8aa17d4a34a34,
              mid_parse_282d22ab9b032f2f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RinexNavigationParser(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RinexNavigationParser(const RinexNavigationParser& obj) : ::java::lang::Object(obj) {}

            RinexNavigationParser();
            RinexNavigationParser(const ::org::orekit::time::TimeScales &);

            ::org::orekit::files::rinex::navigation::RinexNavigation parse(const ::org::orekit::data::DataSource &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          extern PyType_Def PY_TYPE_DEF(RinexNavigationParser);
          extern PyTypeObject *PY_TYPE(RinexNavigationParser);

          class t_RinexNavigationParser {
          public:
            PyObject_HEAD
            RinexNavigationParser object;
            static PyObject *wrap_Object(const RinexNavigationParser&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
