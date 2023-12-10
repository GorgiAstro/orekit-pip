#ifndef org_orekit_forces_drag_DragSensitive_H
#define org_orekit_forces_drag_DragSensitive_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
        }
      }
    }
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace utils {
      class ParameterDriver;
    }
    namespace propagation {
      class SpacecraftState;
      class FieldSpacecraftState;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        class DragSensitive : public ::java::lang::Object {
         public:
          enum {
            mid_dragAcceleration_72c100be3e679e5e,
            mid_dragAcceleration_3061f9a13979e9fa,
            mid_getDragParametersDrivers_a6156df500549a58,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DragSensitive(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DragSensitive(const DragSensitive& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *DRAG_COEFFICIENT;
          static ::java::lang::String *GLOBAL_DRAG_FACTOR;
          static ::java::lang::String *LIFT_RATIO;

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D dragAcceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D dragAcceleration(const ::org::orekit::propagation::SpacecraftState &, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const JArray< jdouble > &) const;
          ::java::util::List getDragParametersDrivers() const;
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
        extern PyType_Def PY_TYPE_DEF(DragSensitive);
        extern PyTypeObject *PY_TYPE(DragSensitive);

        class t_DragSensitive {
        public:
          PyObject_HEAD
          DragSensitive object;
          static PyObject *wrap_Object(const DragSensitive&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
