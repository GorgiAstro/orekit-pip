#ifndef org_orekit_files_ccsds_utils_generation_AbstractGenerator_H
#define org_orekit_files_ccsds_utils_generation_AbstractGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class TimeConverter;
        }
        namespace utils {
          namespace generation {
            class Generator;
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      namespace units {
        class Unit;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class IOException;
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
                mid_init$_da38cf1e116c8866,
                mid_close_ff7cb6c242604316,
                mid_dateToCalendarString_3a84e25c986c6ee9,
                mid_dateToString_3a84e25c986c6ee9,
                mid_dateToString_4b7bd88ca2c9af4f,
                mid_doubleToString_e3ac8af686594d08,
                mid_enterSection_105e1eadb709d9ac,
                mid_exitSection_d2c8eb4129821f0e,
                mid_getOutputName_d2c8eb4129821f0e,
                mid_newLine_ff7cb6c242604316,
                mid_siToCcsdsName_95277969d373e11f,
                mid_unitsListToString_fb05e7322a967ef4,
                mid_writeEntry_fbddb446f588d87c,
                mid_writeEntry_9720630430a2c97a,
                mid_writeEntry_7c6becc5014ffb9d,
                mid_writeEntry_23006b59d2886732,
                mid_writeEntry_5a370e95f6df4f1f,
                mid_writeEntry_c56f62b126843856,
                mid_writeEntry_3276450880246d77,
                mid_writeRawData_e8d07df586815a42,
                mid_writeRawData_b81bfb528ebad57a,
                mid_writeUnits_acf6666529be31c6,
                mid_complain_c5d48f261709aa3e,
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
