#ifndef org_orekit_files_ccsds_utils_generation_AbstractGenerator_H
#define org_orekit_files_ccsds_utils_generation_AbstractGenerator_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
  namespace lang {
    class CharSequence;
    class Double;
    class Enum;
    class Appendable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      namespace units {
        class Unit;
      }
    }
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {
            class Generator;
          }
        }
        namespace definitions {
          class TimeConverter;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            class AbstractGenerator : public ::java::lang::Object {
             public:
              enum {
                mid_init$_a89f5039559ee5f9,
                mid_close_7ae3461a92a43152,
                mid_dateToCalendarString_e9166ff038580198,
                mid_dateToString_e9166ff038580198,
                mid_dateToString_5f1e8067dcf848fb,
                mid_doubleToString_085bbc49599fa163,
                mid_enterSection_e939c6558ae8d313,
                mid_exitSection_0090f7797e403f43,
                mid_getOutputName_0090f7797e403f43,
                mid_newLine_7ae3461a92a43152,
                mid_siToCcsdsName_43625fc1c3d86afe,
                mid_unitsListToString_7df61b71f083fbd6,
                mid_writeEntry_c0315b1049063d00,
                mid_writeEntry_8ef0818590b472f3,
                mid_writeEntry_0a2534765e753ec9,
                mid_writeEntry_a1392c2233da957d,
                mid_writeEntry_fd7b1fd8e935b456,
                mid_writeEntry_b458f0406720c03f,
                mid_writeEntry_20cfd7e2288cf462,
                mid_writeRawData_be0046d7f7239695,
                mid_writeRawData_d77f10dac029c69d,
                mid_writeUnits_f6642efa67a69233,
                mid_complain_d1dd1bdcf55f8f80,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AbstractGenerator(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AbstractGenerator(const AbstractGenerator& obj) : ::java::lang::Object(obj) {}

              AbstractGenerator(const ::java::lang::Appendable &, const ::java::lang::String &, jdouble, jboolean);

              void close() const;
              ::java::lang::String dateToCalendarString(const ::org::orekit::files::ccsds::definitions::TimeConverter &, const ::org::orekit::time::AbsoluteDate &) const;
              ::java::lang::String dateToString(const ::org::orekit::files::ccsds::definitions::TimeConverter &, const ::org::orekit::time::AbsoluteDate &) const;
              ::java::lang::String dateToString(jint, jint, jint, jint, jint, jdouble) const;
              ::java::lang::String doubleToString(jdouble) const;
              void enterSection(const ::java::lang::String &) const;
              ::java::lang::String exitSection() const;
              ::java::lang::String getOutputName() const;
              void newLine() const;
              ::java::lang::String siToCcsdsName(const ::java::lang::String &) const;
              ::java::lang::String unitsListToString(const ::java::util::List &) const;
              void writeEntry(const ::java::lang::String &, const ::java::lang::Enum &, jboolean) const;
              void writeEntry(const ::java::lang::String &, jchar, jboolean) const;
              void writeEntry(const ::java::lang::String &, jint, jboolean) const;
              void writeEntry(const ::java::lang::String &, const ::java::util::List &, jboolean) const;
              void writeEntry(const ::java::lang::String &, const ::java::lang::Double &, const ::org::orekit::utils::units::Unit &, jboolean) const;
              void writeEntry(const ::java::lang::String &, jdouble, const ::org::orekit::utils::units::Unit &, jboolean) const;
              void writeEntry(const ::java::lang::String &, const ::org::orekit::files::ccsds::definitions::TimeConverter &, const ::org::orekit::time::AbsoluteDate &, jboolean, jboolean) const;
              void writeRawData(jchar) const;
              void writeRawData(const ::java::lang::CharSequence &) const;
              jboolean writeUnits(const ::org::orekit::utils::units::Unit &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {
            extern PyType_Def PY_TYPE_DEF(AbstractGenerator);
            extern PyTypeObject *PY_TYPE(AbstractGenerator);

            class t_AbstractGenerator {
            public:
              PyObject_HEAD
              AbstractGenerator object;
              static PyObject *wrap_Object(const AbstractGenerator&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
