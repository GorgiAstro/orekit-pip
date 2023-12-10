#ifndef org_orekit_files_ccsds_definitions_TimeConverter_H
#define org_orekit_files_ccsds_definitions_TimeConverter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeScale;
      class DateTimeComponents;
      class AbsoluteDate;
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
              mid_init$_f0f36dfd3c952abf,
              mid_components_4a363a7423fa6ac8,
              mid_getReferenceDate_aaa854c403487cf3,
              mid_getTimeScale_63ac10047983bd43,
              mid_offset_e912d21057defe63,
              mid_parse_a7e270765e35aadf,
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
