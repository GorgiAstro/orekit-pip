#ifndef org_orekit_files_ccsds_definitions_TimeConverter_H
#define org_orekit_files_ccsds_definitions_TimeConverter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class DateTimeComponents;
      class AbsoluteDate;
      class TimeScale;
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
      namespace ccsds {
        namespace definitions {

          class TimeConverter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_2ca1c09f60ea4ec0,
              mid_components_29837d2cc2c43d67,
              mid_getReferenceDate_c325492395d89b24,
              mid_getTimeScale_34d3bda0a8989e3e,
              mid_offset_fd347811007a6ba3,
              mid_parse_e7249f44171a2907,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TimeConverter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TimeConverter(const TimeConverter& obj) : ::java::lang::Object(obj) {}

            TimeConverter(const ::org::orekit::time::TimeScale &, const ::org::orekit::time::AbsoluteDate &);

            ::org::orekit::time::DateTimeComponents components(const ::org::orekit::time::AbsoluteDate &) const;
            ::org::orekit::time::AbsoluteDate getReferenceDate() const;
            ::org::orekit::time::TimeScale getTimeScale() const;
            jdouble offset(const ::org::orekit::time::AbsoluteDate &) const;
            ::org::orekit::time::AbsoluteDate parse(const ::java::lang::String &) const;
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
      namespace ccsds {
        namespace definitions {
          extern PyType_Def PY_TYPE_DEF(TimeConverter);
          extern PyTypeObject *PY_TYPE(TimeConverter);

          class t_TimeConverter {
          public:
            PyObject_HEAD
            TimeConverter object;
            static PyObject *wrap_Object(const TimeConverter&);
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
