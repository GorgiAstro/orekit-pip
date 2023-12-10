#ifndef org_orekit_forces_drag_PythonAbstractDragForceModel_H
#define org_orekit_forces_drag_PythonAbstractDragForceModel_H

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
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        class PythonAbstractDragForceModel : public ::org::orekit::forces::drag::AbstractDragForceModel {
         public:
          enum {
            mid_init$_7536aa327c8cd1b5,
            mid_acceleration_b42ac4b5bfb80fab,
            mid_acceleration_8954761face5e1a7,
            mid_finalize_0fa09c18fee449d5,
            mid_getParametersDrivers_2afa36052df4765d,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAbstractDragForceModel(jobject obj) : ::org::orekit::forces::drag::AbstractDragForceModel(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAbstractDragForceModel(const PythonAbstractDragForceModel& obj) : ::org::orekit::forces::drag::AbstractDragForceModel(obj) {}

          PythonAbstractDragForceModel(const ::org::orekit::models::earth::atmosphere::Atmosphere &);

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          void finalize() const;
          ::java::util::List getParametersDrivers() const;
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
        extern PyType_Def PY_TYPE_DEF(PythonAbstractDragForceModel);
        extern PyTypeObject *PY_TYPE(PythonAbstractDragForceModel);

        class t_PythonAbstractDragForceModel {
        public:
          PyObject_HEAD
          PythonAbstractDragForceModel object;
          static PyObject *wrap_Object(const PythonAbstractDragForceModel&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
