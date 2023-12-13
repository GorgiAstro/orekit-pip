#ifndef org_orekit_files_ccsds_utils_generation_Generator_H
#define org_orekit_files_ccsds_utils_generation_Generator_H

#include "java/lang/AutoCloseable.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class CharSequence;
    class Double;
    class Enum;
    class Class;
    class Object;
    class String;
  }
  namespace io {
    class IOException;
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
          class FileFormat;
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

            class Generator : public ::java::lang::AutoCloseable {
             public:
              enum {
                mid_close_a1fa5dae97ea5ed2,
                mid_dateToCalendarString_2352320e099b9531,
                mid_dateToString_2352320e099b9531,
                mid_dateToString_a97dc068e719c14c,
                mid_doubleToString_11ae2994efd15504,
                mid_endMessage_734b91ac30d5f9b4,
                mid_enterSection_734b91ac30d5f9b4,
                mid_exitSection_1c1fa1e935d6cdcf,
                mid_getFormat_e4c64bde02ca34c3,
                mid_getOutputName_1c1fa1e935d6cdcf,
                mid_newLine_a1fa5dae97ea5ed2,
                mid_siToCcsdsName_6f0f3576df9f75ee,
                mid_startMessage_03ff9b80a9f63d81,
                mid_unitsListToString_ec48f6b9c20c08b3,
                mid_writeComments_0e7c3032c7c93ed3,
                mid_writeEntry_20c2e4ef4663dfc7,
                mid_writeEntry_f61f520115d82ef0,
                mid_writeEntry_68be04607557ff44,
                mid_writeEntry_06b2ed40d0cea8dd,
                mid_writeEntry_09a7fd998b7aed89,
                mid_writeEntry_bae21004607fffc6,
                mid_writeEntry_6c986fa8f6aabe22,
                mid_writeEntry_7b1b43161792cef8,
                mid_writeRawData_df95ad02f5b4acd9,
                mid_writeRawData_902d69c788edaf18,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Generator(jobject obj) : ::java::lang::AutoCloseable(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Generator(const Generator& obj) : ::java::lang::AutoCloseable(obj) {}

              void close() const;
              ::java::lang::String dateToCalendarString(const ::org::orekit::files::ccsds::definitions::TimeConverter &, const ::org::orekit::time::AbsoluteDate &) const;
              ::java::lang::String dateToString(const ::org::orekit::files::ccsds::definitions::TimeConverter &, const ::org::orekit::time::AbsoluteDate &) const;
              ::java::lang::String dateToString(jint, jint, jint, jint, jint, jdouble) const;
              ::java::lang::String doubleToString(jdouble) const;
              void endMessage(const ::java::lang::String &) const;
              void enterSection(const ::java::lang::String &) const;
              ::java::lang::String exitSection() const;
              ::org::orekit::files::ccsds::utils::FileFormat getFormat() const;
              ::java::lang::String getOutputName() const;
              void newLine() const;
              ::java::lang::String siToCcsdsName(const ::java::lang::String &) const;
              void startMessage(const ::java::lang::String &, const ::java::lang::String &, jdouble) const;
              ::java::lang::String unitsListToString(const ::java::util::List &) const;
              void writeComments(const ::java::util::List &) const;
              void writeEntry(const ::java::lang::String &, const ::java::lang::Enum &, jboolean) const;
              void writeEntry(const ::java::lang::String &, jchar, jboolean) const;
              void writeEntry(const ::java::lang::String &, jint, jboolean) const;
              void writeEntry(const ::java::lang::String &, const ::java::util::List &, jboolean) const;
              void writeEntry(const ::java::lang::String &, const ::java::lang::Double &, const ::org::orekit::utils::units::Unit &, jboolean) const;
              void writeEntry(const ::java::lang::String &, const ::java::lang::String &, const ::org::orekit::utils::units::Unit &, jboolean) const;
              void writeEntry(const ::java::lang::String &, jdouble, const ::org::orekit::utils::units::Unit &, jboolean) const;
              void writeEntry(const ::java::lang::String &, const ::org::orekit::files::ccsds::definitions::TimeConverter &, const ::org::orekit::time::AbsoluteDate &, jboolean, jboolean) const;
              void writeRawData(jchar) const;
              void writeRawData(const ::java::lang::CharSequence &) const;
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
            extern PyType_Def PY_TYPE_DEF(Generator);
            extern PyTypeObject *PY_TYPE(Generator);

            class t_Generator {
            public:
              PyObject_HEAD
              Generator object;
              static PyObject *wrap_Object(const Generator&);
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
