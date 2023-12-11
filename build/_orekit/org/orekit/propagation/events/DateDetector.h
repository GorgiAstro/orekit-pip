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
    namespace propagation {
      namespace events {
        class DateDetector;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
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
            mid_init$_1e4a523e2df6fd31,
            mid_addEventDate_20affcbd28542333,
            mid_g_1bbf81d80c47ecdd,
            mid_getDate_7a97f7e149e79afb,
            mid_getDates_0d9551367f7ecdef,
            mid_withMinGap_55168a13fa43b797,
            mid_create_2827a5ee6c5052d6,
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
