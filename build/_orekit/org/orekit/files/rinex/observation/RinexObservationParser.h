#ifndef org_orekit_files_rinex_observation_RinexObservationParser_H
#define org_orekit_files_rinex_observation_RinexObservationParser_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {
          class RinexObservation;
        }
      }
    }
    namespace data {
      class DataSource;
    }
    namespace time {
      class TimeScales;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          class RinexObservationParser : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_init$_fdb437c675e993f7,
              mid_parse_c91974ebe6105401,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RinexObservationParser(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RinexObservationParser(const RinexObservationParser& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *DEFAULT_RINEX_2_NAMES;
            static ::java::lang::String *DEFAULT_RINEX_3_NAMES;

            RinexObservationParser();
            RinexObservationParser(const ::org::orekit::time::TimeScales &);

            ::org::orekit::files::rinex::observation::RinexObservation parse(const ::org::orekit::data::DataSource &) const;
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
        namespace observation {
          extern PyType_Def PY_TYPE_DEF(RinexObservationParser);
          extern PyTypeObject *PY_TYPE(RinexObservationParser);

          class t_RinexObservationParser {
          public:
            PyObject_HEAD
            RinexObservationParser object;
            static PyObject *wrap_Object(const RinexObservationParser&);
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
