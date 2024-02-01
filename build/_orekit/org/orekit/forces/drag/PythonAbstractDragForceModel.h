#ifndef org_orekit_forces_drag_PythonAbstractDragForceModel_H
#define org_orekit_forces_drag_PythonAbstractDragForceModel_H

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
    namespace models {
      namespace earth {
        namespace atmosphere {
          class Atmosphere;
        }
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
            mid_init$_00032388d927cffa,
            mid_acceleration_5e147f44c28a35c9,
            mid_acceleration_9816b8f76e94356a,
            mid_finalize_ff7cb6c242604316,
            mid_getParametersDrivers_d751c1a57012b438,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
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

          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
