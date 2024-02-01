#ifndef org_orekit_forces_drag_IsotropicDrag_H
#define org_orekit_forces_drag_IsotropicDrag_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {
        class DragSensitive;
      }
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
    }
  }
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

        class IsotropicDrag : public ::java::lang::Object {
         public:
          enum {
            mid_init$_13edac039e8cc967,
            mid_init$_cd5724127cc72e96,
            mid_dragAcceleration_4a6ab2502c320936,
            mid_dragAcceleration_73bcdbeb8ff641bb,
            mid_getDragParametersDrivers_d751c1a57012b438,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IsotropicDrag(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IsotropicDrag(const IsotropicDrag& obj) : ::java::lang::Object(obj) {}

          IsotropicDrag(jdouble, jdouble);
          IsotropicDrag(jdouble, jdouble, jdouble, jdouble);

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
        extern PyType_Def PY_TYPE_DEF(IsotropicDrag);
        extern PyTypeObject *PY_TYPE(IsotropicDrag);

        class t_IsotropicDrag {
        public:
          PyObject_HEAD
          IsotropicDrag object;
          static PyObject *wrap_Object(const IsotropicDrag&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
