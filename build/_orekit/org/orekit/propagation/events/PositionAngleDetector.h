#ifndef org_orekit_propagation_events_PositionAngleDetector_H
#define org_orekit_propagation_events_PositionAngleDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
    }
    namespace errors {
      class OrekitIllegalArgumentException;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      namespace events {
        class PositionAngleDetector;
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

        class PositionAngleDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_da38e6127572ad93,
            mid_init$_caefc517bbd16a1e,
            mid_g_432f3d328c15ec82,
            mid_getAngle_dff5885c2c873297,
            mid_getOrbitType_e29360d311dc0e20,
            mid_getPositionAngleType_8f17e83e5a86217c,
            mid_init_826b4eda94da4e78,
            mid_create_39063026c0d72c49,
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
