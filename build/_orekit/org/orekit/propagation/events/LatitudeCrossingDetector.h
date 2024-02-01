#ifndef org_orekit_propagation_events_LatitudeCrossingDetector_H
#define org_orekit_propagation_events_LatitudeCrossingDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace propagation {
      class SpacecraftState;
      namespace events {
        class LatitudeCrossingDetector;
      }
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
            mid_init$_4a8b2a0e42b8245c,
            mid_init$_50506f2259cf207f,
            mid_g_b443ba1cc794b916,
            mid_getBody_dc8275c31111ad9c,
            mid_getLatitude_9981f74b2d109da6,
            mid_create_b5bed3b1eb7b893f,
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
