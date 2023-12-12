#ifndef org_orekit_forces_drag_DragForce_H
#define org_orekit_forces_drag_DragForce_H

#include "org/orekit/forces/drag/AbstractDragForceModel.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace forces {
      namespace drag {
        class DragSensitive;
      }
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          class Atmosphere;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        class DragForce : public ::org::orekit::forces::drag::AbstractDragForceModel {
         public:
          enum {
            mid_init$_36405303e879e795,
            mid_acceleration_61944e27a39e8290,
            mid_acceleration_b61fb59a041240c6,
            mid_getAtmosphere_344c414ab8fc3e7e,
            mid_getParametersDrivers_0d9551367f7ecdef,
            mid_getSpacecraft_5af7812abe9360ec,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DragForce(jobject obj) : ::org::orekit::forces::drag::AbstractDragForceModel(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DragForce(const DragForce& obj) : ::org::orekit::forces::drag::AbstractDragForceModel(obj) {}

          DragForce(const ::org::orekit::models::earth::atmosphere::Atmosphere &, const ::org::orekit::forces::drag::DragSensitive &);

          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          ::org::orekit::models::earth::atmosphere::Atmosphere getAtmosphere() const;
          ::java::util::List getParametersDrivers() const;
          ::org::orekit::forces::drag::DragSensitive getSpacecraft() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {
        extern PyType_Def PY_TYPE_DEF(DragForce);
        extern PyTypeObject *PY_TYPE(DragForce);

        class t_DragForce {
        public:
          PyObject_HEAD
          DragForce object;
          static PyObject *wrap_Object(const DragForce&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
