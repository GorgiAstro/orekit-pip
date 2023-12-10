#ifndef org_orekit_propagation_events_LongitudeCrossingDetector_H
#define org_orekit_propagation_events_LongitudeCrossingDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace time {
      class AbsoluteDate;
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
            mid_init$_48cd945bba9df75e,
            mid_init$_a82b63c30b8dcbca,
            mid_g_432f3d328c15ec82,
            mid_getBody_000d48aad6c74b0a,
            mid_getLongitude_dff5885c2c873297,
            mid_init_826b4eda94da4e78,
            mid_create_e22e3f70c8b0ac7b,
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
