#ifndef org_orekit_forces_drag_PythonDragSensitive_H
#define org_orekit_forces_drag_PythonDragSensitive_H

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
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        class PythonDragSensitive : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_dragAcceleration_4a6ab2502c320936,
            mid_dragAcceleration_73bcdbeb8ff641bb,
            mid_finalize_ff7cb6c242604316,
            mid_getDragParametersDrivers_d751c1a57012b438,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonDragSensitive(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonDragSensitive(const PythonDragSensitive& obj) : ::java::lang::Object(obj) {}

          PythonDragSensitive();

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D dragAcceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D dragAcceleration(const ::org::orekit::propagation::SpacecraftState &, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const JArray< jdouble > &) const;
          void finalize() const;
          ::java::util::List getDragParametersDrivers() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonDragSensitive);
        extern PyTypeObject *PY_TYPE(PythonDragSensitive);

        class t_PythonDragSensitive {
        public:
          PyObject_HEAD
          PythonDragSensitive object;
          static PyObject *wrap_Object(const PythonDragSensitive&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
