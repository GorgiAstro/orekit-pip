#ifndef org_orekit_files_rinex_clock_RinexClock$ReferenceClock_H
#define org_orekit_files_rinex_clock_RinexClock$ReferenceClock_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          class RinexClock$ReferenceClock : public ::java::lang::Object {
           public:
            enum {
              mid_init$_52aa0b8ea90f2a77,
              mid_getClockConstraint_dff5885c2c873297,
              mid_getClockID_11b109bd155ca898,
              mid_getEndDate_85703d13e302437e,
              mid_getReferenceName_11b109bd155ca898,
              mid_getStartDate_85703d13e302437e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RinexClock$ReferenceClock(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RinexClock$ReferenceClock(const RinexClock$ReferenceClock& obj) : ::java::lang::Object(obj) {}

            RinexClock$ReferenceClock(const ::java::lang::String &, const ::java::lang::String &, jdouble, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &);

            jdouble getClockConstraint() const;
            ::java::lang::String getClockID() const;
            ::org::orekit::time::AbsoluteDate getEndDate() const;
            ::java::lang::String getReferenceName() const;
            ::org::orekit::time::AbsoluteDate getStartDate() const;
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
        namespace clock {
          extern PyType_Def PY_TYPE_DEF(RinexClock$ReferenceClock);
          extern PyTypeObject *PY_TYPE(RinexClock$ReferenceClock);

          class t_RinexClock$ReferenceClock {
          public:
            PyObject_HEAD
            RinexClock$ReferenceClock object;
            static PyObject *wrap_Object(const RinexClock$ReferenceClock&);
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
