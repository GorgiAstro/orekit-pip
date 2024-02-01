#ifndef org_orekit_propagation_events_PositionAngleDetector_H
#define org_orekit_propagation_events_PositionAngleDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace errors {
      class OrekitIllegalArgumentException;
    }
    namespace propagation {
      namespace events {
        class PositionAngleDetector;
      }
      class SpacecraftState;
    }
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
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

        class PositionAngleDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_6f3b6a9a2f8f2118,
            mid_init$_025744b01c4aa6fc,
            mid_g_b443ba1cc794b916,
            mid_getAngle_9981f74b2d109da6,
            mid_getOrbitType_495f818d3570b7f5,
            mid_getPositionAngleType_a6db4e6edefda4be,
            mid_init_14deaae988292d42,
            mid_create_2741a0a6bb9de47a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PositionAngleDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PositionAngleDetector(const PositionAngleDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          PositionAngleDetector(const ::org::orekit::orbits::OrbitType &, const ::org::orekit::orbits::PositionAngleType &, jdouble);
          PositionAngleDetector(jdouble, jdouble, const ::org::orekit::orbits::OrbitType &, const ::org::orekit::orbits::PositionAngleType &, jdouble);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          jdouble getAngle() const;
          ::org::orekit::orbits::OrbitType getOrbitType() const;
          ::org::orekit::orbits::PositionAngleType getPositionAngleType() const;
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
        extern PyType_Def PY_TYPE_DEF(PositionAngleDetector);
        extern PyTypeObject *PY_TYPE(PositionAngleDetector);

        class t_PositionAngleDetector {
        public:
          PyObject_HEAD
          PositionAngleDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PositionAngleDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PositionAngleDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PositionAngleDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
