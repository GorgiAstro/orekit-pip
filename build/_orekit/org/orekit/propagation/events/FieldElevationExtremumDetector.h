#ifndef org_orekit_propagation_events_FieldElevationExtremumDetector_H
#define org_orekit_propagation_events_FieldElevationExtremumDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
  }
  namespace orekit {
    namespace frames {
      class TopocentricFrame;
    }
    namespace propagation {
      class FieldSpacecraftState;
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

        class FieldElevationExtremumDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_3d7271a8ea288af2,
            mid_init$_28fe72372b8ccb78,
            mid_g_41a008afe53da855,
            mid_getElevation_41a008afe53da855,
            mid_getTopocentricFrame_e17d4157ae504252,
            mid_create_17977b547af3c25a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldElevationExtremumDetector(jobject obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldElevationExtremumDetector(const FieldElevationExtremumDetector& obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {}

          FieldElevationExtremumDetector(const ::org::hipparchus::Field &, const ::org::orekit::frames::TopocentricFrame &);
          FieldElevationExtremumDetector(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::frames::TopocentricFrame &);

          ::org::hipparchus::CalculusFieldElement g(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          ::org::hipparchus::CalculusFieldElement getElevation(const ::org::orekit::propagation::FieldSpacecraftState &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldElevationExtremumDetector);
        extern PyTypeObject *PY_TYPE(FieldElevationExtremumDetector);

        class t_FieldElevationExtremumDetector {
        public:
          PyObject_HEAD
          FieldElevationExtremumDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldElevationExtremumDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldElevationExtremumDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldElevationExtremumDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
