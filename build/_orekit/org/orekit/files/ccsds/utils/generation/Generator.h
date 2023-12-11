#ifndef org_orekit_files_ccsds_utils_generation_Generator_H
#define org_orekit_files_ccsds_utils_generation_Generator_H

#include "java/lang/AutoCloseable.h"

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
                mid_close_0640e6acf969ed28,
                mid_dateToCalendarString_53bb79ba03b156ff,
                mid_dateToString_53bb79ba03b156ff,
                mid_dateToString_26917e8002e2fe0e,
                mid_doubleToString_c03a7791f2fcb1f1,
                mid_endMessage_f5ffdf29129ef90a,
                mid_enterSection_f5ffdf29129ef90a,
                mid_exitSection_3cffd47377eca18a,
                mid_getFormat_c3a4c5f37e67a25e,
                mid_getOutputName_3cffd47377eca18a,
                mid_newLine_0640e6acf969ed28,
                mid_siToCcsdsName_60bb1b490b673cbf,
                mid_startMessage_9547058464ed819e,
                mid_unitsListToString_efa2aa6df7244612,
                mid_writeComments_4ccaedadb068bdeb,
                mid_writeEntry_a576ec9025591acc,
                mid_writeEntry_93ab992976af83e7,
                mid_writeEntry_011f5c0c4346496d,
                mid_writeEntry_134df300ac33b05f,
                mid_writeEntry_23e19e02040a2cc2,
                mid_writeEntry_a717407bcf2f477f,
                mid_writeEntry_8e286bd988c33b7f,
                mid_writeEntry_f678851e8742cc77,
                mid_writeRawData_102587d250c3217b,
                mid_writeRawData_01ce980d49cb2b81,
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
