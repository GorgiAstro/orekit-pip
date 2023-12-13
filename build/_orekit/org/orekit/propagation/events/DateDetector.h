#ifndef org_orekit_propagation_events_DateDetector_H
#define org_orekit_propagation_events_DateDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
    namespace propagation {
      class SpacecraftState;
      namespace events {
        class DateDetector;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class IllegalArgumentException;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        class DateDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_92261e91d74abb39,
            mid_addEventDate_02135a6ef25adb4b,
            mid_g_a17ea857ce74d258,
            mid_getDate_c325492395d89b24,
            mid_getDates_e62d3bb06d56d7e3,
            mid_withMinGap_66bd8d09af792639,
            mid_create_359409a7dfff0eb5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DateDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DateDetector(const DateDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          static jdouble DEFAULT_MAX_CHECK;
          static jdouble DEFAULT_MIN_GAP;
          static jdouble DEFAULT_THRESHOLD;

          DateDetector(const JArray< ::org::orekit::time::TimeStamped > &);

          void addEventDate(const ::org::orekit::time::AbsoluteDate &) const;
          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::time::AbsoluteDate getDate() const;
          ::java::util::List getDates() const;
          DateDetector withMinGap(jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(DateDetector);
        extern PyTypeObject *PY_TYPE(DateDetector);

        class t_DateDetector {
        public:
          PyObject_HEAD
          DateDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DateDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DateDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DateDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
