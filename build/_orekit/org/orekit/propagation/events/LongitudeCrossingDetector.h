#ifndef org_orekit_propagation_events_LongitudeCrossingDetector_H
#define org_orekit_propagation_events_LongitudeCrossingDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace propagation {
      namespace events {
        class LongitudeCrossingDetector;
      }
      class SpacecraftState;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        class LongitudeCrossingDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_4a8b2a0e42b8245c,
            mid_init$_50506f2259cf207f,
            mid_g_b443ba1cc794b916,
            mid_getBody_dc8275c31111ad9c,
            mid_getLongitude_9981f74b2d109da6,
            mid_init_14deaae988292d42,
            mid_create_842e6e7144e624ed,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongitudeCrossingDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongitudeCrossingDetector(const LongitudeCrossingDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          LongitudeCrossingDetector(const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble);
          LongitudeCrossingDetector(jdouble, jdouble, const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::bodies::OneAxisEllipsoid getBody() const;
          jdouble getLongitude() const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(LongitudeCrossingDetector);
        extern PyTypeObject *PY_TYPE(LongitudeCrossingDetector);

        class t_LongitudeCrossingDetector {
        public:
          PyObject_HEAD
          LongitudeCrossingDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_LongitudeCrossingDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const LongitudeCrossingDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const LongitudeCrossingDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
