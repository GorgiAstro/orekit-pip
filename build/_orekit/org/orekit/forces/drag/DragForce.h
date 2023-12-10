#ifndef org_orekit_forces_drag_DragForce_H
#define org_orekit_forces_drag_DragForce_H

#include "org/orekit/forces/drag/AbstractDragForceModel.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace forces {
      namespace drag {
        class DragSensitive;
      }
    }
    namespace utils {
      class ParameterDriver;
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
            mid_init$_47c8c3109a8b7c41,
            mid_acceleration_b42ac4b5bfb80fab,
            mid_acceleration_8954761face5e1a7,
            mid_getAtmosphere_5eed92b432f371c2,
            mid_getParametersDrivers_2afa36052df4765d,
            mid_getSpacecraft_2df1d9602f270c8d,
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

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
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
