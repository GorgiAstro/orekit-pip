#ifndef org_orekit_files_rinex_navigation_TimeSystemCorrection_H
#define org_orekit_files_rinex_navigation_TimeSystemCorrection_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          class TimeSystemCorrection : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f7ef28a3bc2d7df3,
              mid_getReferenceDate_aaa854c403487cf3,
              mid_getTimeSystemCorrectionA0_456d9a2f64d6b28d,
              mid_getTimeSystemCorrectionA1_456d9a2f64d6b28d,
              mid_getTimeSystemCorrectionType_0090f7797e403f43,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TimeSystemCorrection(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TimeSystemCorrection(const TimeSystemCorrection& obj) : ::java::lang::Object(obj) {}

            TimeSystemCorrection(const ::java::lang::String &, const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble);

            ::org::orekit::time::AbsoluteDate getReferenceDate() const;
            jdouble getTimeSystemCorrectionA0() const;
            jdouble getTimeSystemCorrectionA1() const;
            ::java::lang::String getTimeSystemCorrectionType() const;
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
        namespace navigation {
          extern PyType_Def PY_TYPE_DEF(TimeSystemCorrection);
          extern PyTypeObject *PY_TYPE(TimeSystemCorrection);

          class t_TimeSystemCorrection {
          public:
            PyObject_HEAD
            TimeSystemCorrection object;
            static PyObject *wrap_Object(const TimeSystemCorrection&);
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
