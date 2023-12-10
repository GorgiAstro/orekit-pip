#ifndef org_orekit_files_ccsds_utils_generation_PythonGenerator_H
#define org_orekit_files_ccsds_utils_generation_PythonGenerator_H

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
    class Throwable;
    class Double;
    class Enum;
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

            class PythonGenerator : public ::java::lang::Object {
             public:
              enum {
                mid_init$_7ae3461a92a43152,
                mid_close_7ae3461a92a43152,
                mid_dateToCalendarString_e9166ff038580198,
                mid_dateToString_e9166ff038580198,
                mid_dateToString_5f1e8067dcf848fb,
                mid_doubleToString_085bbc49599fa163,
                mid_endMessage_e939c6558ae8d313,
                mid_enterSection_e939c6558ae8d313,
                mid_exitSection_0090f7797e403f43,
                mid_finalize_7ae3461a92a43152,
                mid_getFormat_b51f613f857a5e84,
                mid_getOutputName_0090f7797e403f43,
                mid_newLine_7ae3461a92a43152,
                mid_pythonDecRef_7ae3461a92a43152,
                mid_pythonExtension_a27fc9afd27e559d,
                mid_pythonExtension_fefb08975c10f0a1,
                mid_siToCcsdsName_43625fc1c3d86afe,
                mid_startMessage_f7e4436e61826cb4,
                mid_unitsListToString_7df61b71f083fbd6,
                mid_writeComments_65de9727799c5641,
                mid_writeEntry_c0315b1049063d00,
                mid_writeEntry_8ef0818590b472f3,
                mid_writeEntry_0a2534765e753ec9,
                mid_writeEntry_a1392c2233da957d,
                mid_writeEntry_fd7b1fd8e935b456,
                mid_writeEntry_110375161a97bc67,
                mid_writeEntry_b458f0406720c03f,
                mid_writeEntry_20cfd7e2288cf462,
                mid_writeRawData_be0046d7f7239695,
                mid_writeRawData_d77f10dac029c69d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonGenerator(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonGenerator(const PythonGenerator& obj) : ::java::lang::Object(obj) {}

              PythonGenerator();

              void close() const;
              ::java::lang::String dateToCalendarString(const ::org::orekit::files::ccsds::definitions::TimeConverter &, const ::org::orekit::time::AbsoluteDate &) const;
              ::java::lang::String dateToString(const ::org::orekit::files::ccsds::definitions::TimeConverter &, const ::org::orekit::time::AbsoluteDate &) const;
              ::java::lang::String dateToString(jint, jint, jint, jint, jint, jdouble) const;
              ::java::lang::String doubleToString(jdouble) const;
              void endMessage(const ::java::lang::String &) const;
              void enterSection(const ::java::lang::String &) const;
              ::java::lang::String exitSection() const;
              void finalize() const;
              ::org::orekit::files::ccsds::utils::FileFormat getFormat() const;
              ::java::lang::String getOutputName() const;
              void newLine() const;
              void pythonDecRef() const;
              jlong pythonExtension() const;
              void pythonExtension(jlong) const;
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
            extern PyType_Def PY_TYPE_DEF(PythonGenerator);
            extern PyTypeObject *PY_TYPE(PythonGenerator);

            class t_PythonGenerator {
            public:
              PyObject_HEAD
              PythonGenerator object;
              static PyObject *wrap_Object(const PythonGenerator&);
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