#ifndef org_orekit_files_ccsds_utils_generation_PythonGenerator_H
#define org_orekit_files_ccsds_utils_generation_PythonGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
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
    namespace utils {
      namespace units {
        class Unit;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
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
  namespace io {
    class IOException;
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
                mid_init$_0fa09c18fee449d5,
                mid_close_0fa09c18fee449d5,
                mid_dateToCalendarString_40338d1d67048bfb,
                mid_dateToString_40338d1d67048bfb,
                mid_dateToString_b3e3531a0f06efb9,
                mid_doubleToString_e8f51f84167aafbd,
                mid_endMessage_d0bc48d5b00dc40c,
                mid_enterSection_d0bc48d5b00dc40c,
                mid_exitSection_11b109bd155ca898,
                mid_finalize_0fa09c18fee449d5,
                mid_getFormat_66298c6188053be6,
                mid_getOutputName_11b109bd155ca898,
                mid_newLine_0fa09c18fee449d5,
                mid_pythonDecRef_0fa09c18fee449d5,
                mid_pythonExtension_492808a339bfa35f,
                mid_pythonExtension_3a8e7649f31fdb20,
                mid_siToCcsdsName_92807efd57acb082,
                mid_startMessage_d68f2e10a4896937,
                mid_unitsListToString_34ebc3df083d2284,
                mid_writeComments_de3e021e7266b71e,
                mid_writeEntry_ebeb70e5f85f1dc9,
                mid_writeEntry_8e27d18ccaeb99ba,
                mid_writeEntry_f12777dd1821e86a,
                mid_writeEntry_d298f8af5ad811ef,
                mid_writeEntry_b4657dba79ed747b,
                mid_writeEntry_ddc5f91684d983c2,
                mid_writeEntry_95abad989fa63d1a,
                mid_writeEntry_182383f649d6a00c,
                mid_writeRawData_636c0bbb96cab723,
                mid_writeRawData_5e688138ffe60231,
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
