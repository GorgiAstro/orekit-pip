#ifndef org_orekit_propagation_events_ElevationExtremumDetector_H
#define org_orekit_propagation_events_ElevationExtremumDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class ElevationExtremumDetector;
      }
      class SpacecraftState;
    }
    namespace frames {
      class TopocentricFrame;
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

        class ElevationExtremumDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_f9eb40be2920d1a6,
            mid_init$_b7c2f9e5ae29d132,
            mid_g_66a2f071e6ed0c06,
            mid_getElevation_66a2f071e6ed0c06,
            mid_getTopocentricFrame_52fc31c455206160,
            mid_create_f905d37d7398ed09,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ElevationExtremumDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ElevationExtremumDetector(const ElevationExtremumDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          ElevationExtremumDetector(const ::org::orekit::frames::TopocentricFrame &);
          ElevationExtremumDetector(jdouble, jdouble, const ::org::orekit::frames::TopocentricFrame &);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          jdouble getElevation(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::frames::TopocentricFrame getTopocentricFrame() const;
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
        extern PyType_Def PY_TYPE_DEF(ElevationExtremumDetector);
        extern PyTypeObject *PY_TYPE(ElevationExtremumDetector);

        class t_ElevationExtremumDetector {
        public:
          PyObject_HEAD
          ElevationExtremumDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ElevationExtremumDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ElevationExtremumDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ElevationExtremumDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
