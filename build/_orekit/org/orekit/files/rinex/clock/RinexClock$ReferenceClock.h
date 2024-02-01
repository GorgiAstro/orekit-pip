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
              mid_init$_74e16283121a89b8,
              mid_getClockConstraint_9981f74b2d109da6,
              mid_getClockID_d2c8eb4129821f0e,
              mid_getEndDate_80e11148db499dda,
              mid_getReferenceName_d2c8eb4129821f0e,
              mid_getStartDate_80e11148db499dda,
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
