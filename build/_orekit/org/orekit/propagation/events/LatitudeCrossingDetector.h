#ifndef org_orekit_propagation_events_LatitudeCrossingDetector_H
#define org_orekit_propagation_events_LatitudeCrossingDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
      namespace events {
        class LatitudeCrossingDetector;
      }
    }
    namespace bodies {
      class OneAxisEllipsoid;
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

        class LatitudeCrossingDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_cee3325573481ef4,
            mid_init$_732c94d692efbcdf,
            mid_g_1bbf81d80c47ecdd,
            mid_getBody_0c55bd1adf955c4c,
            mid_getLatitude_557b8123390d8d0c,
            mid_create_e988773803ca1687,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LatitudeCrossingDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LatitudeCrossingDetector(const LatitudeCrossingDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          LatitudeCrossingDetector(const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble);
          LatitudeCrossingDetector(jdouble, jdouble, const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::bodies::OneAxisEllipsoid getBody() const;
          jdouble getLatitude() const;
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
        extern PyType_Def PY_TYPE_DEF(LatitudeCrossingDetector);
        extern PyTypeObject *PY_TYPE(LatitudeCrossingDetector);

        class t_LatitudeCrossingDetector {
        public:
          PyObject_HEAD
          LatitudeCrossingDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_LatitudeCrossingDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const LatitudeCrossingDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const LatitudeCrossingDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
