#ifndef org_orekit_propagation_events_DateDetector_H
#define org_orekit_propagation_events_DateDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class IllegalArgumentException;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
    namespace propagation {
      namespace events {
        class DateDetector;
      }
      class SpacecraftState;
    }
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
            mid_init$_735106b00c0040d8,
            mid_addEventDate_8497861b879c83f7,
            mid_g_b443ba1cc794b916,
            mid_getDate_80e11148db499dda,
            mid_getDates_d751c1a57012b438,
            mid_withMinGap_d3f0b55f72255edc,
            mid_create_92993784b8d3c9ad,
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
