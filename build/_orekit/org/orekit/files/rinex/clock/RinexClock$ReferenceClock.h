#ifndef org_orekit_files_rinex_clock_RinexClock$ReferenceClock_H
#define org_orekit_files_rinex_clock_RinexClock$ReferenceClock_H

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
        namespace clock {

          class RinexClock$ReferenceClock : public ::java::lang::Object {
           public:
            enum {
              mid_init$_9c044b1bc256413f,
              mid_getClockConstraint_b74f83833fdad017,
              mid_getClockID_1c1fa1e935d6cdcf,
              mid_getEndDate_c325492395d89b24,
              mid_getReferenceName_1c1fa1e935d6cdcf,
              mid_getStartDate_c325492395d89b24,
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
