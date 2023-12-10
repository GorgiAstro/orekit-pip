#ifndef org_orekit_files_ccsds_utils_generation_Generator_H
#define org_orekit_files_ccsds_utils_generation_Generator_H

#include "java/lang/AutoCloseable.h"

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
    class Class;
    class Object;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class TimeConverter;
        }
        namespace utils {
          class FileFormat;
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
                mid_close_0fa09c18fee449d5,
                mid_dateToCalendarString_40338d1d67048bfb,
                mid_dateToString_40338d1d67048bfb,
                mid_dateToString_b3e3531a0f06efb9,
                mid_doubleToString_e8f51f84167aafbd,
                mid_endMessage_d0bc48d5b00dc40c,
                mid_enterSection_d0bc48d5b00dc40c,
                mid_exitSection_11b109bd155ca898,
                mid_getFormat_66298c6188053be6,
                mid_getOutputName_11b109bd155ca898,
                mid_newLine_0fa09c18fee449d5,
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
