#ifndef org_orekit_forces_maneuvers_propulsion_PythonAbstractConstantThrustPropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_PythonAbstractConstantThrustPropulsionModel_H

#include "org/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel.h"

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
    namespace utils {
      class ParameterDriver;
    }
    namespace forces {
      namespace maneuvers {
        class Control3DVectorCostType;
      }
    }
    namespace time {
      class AbsoluteDate;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          class PythonAbstractConstantThrustPropulsionModel : public ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel {
           public:
            enum {
              mid_init$_61fb1c1298b85822,
              mid_finalize_0640e6acf969ed28,
              mid_getFlowRate_557b8123390d8d0c,
              mid_getFlowRate_86c4a0582e0747ce,
              mid_getFlowRate_e3919ad898361abd,
              mid_getFlowRate_b0b988f941da47d8,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_getThrustVector_f88961cca75a2c0a,
              mid_getThrustVector_b4c4f24efa81746b,
              mid_getThrustVector_73a8498c189497cd,
              mid_getThrustVector_3df461fe15362b2b,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonAbstractConstantThrustPropulsionModel(jobject obj) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonAbstractConstantThrustPropulsionModel(const PythonAbstractConstantThrustPropulsionModel& obj) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(obj) {}

            PythonAbstractConstantThrustPropulsionModel(jdouble, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::forces::maneuvers::Control3DVectorCostType &, const ::java::lang::String &);

            void finalize() const;
            jdouble getFlowRate() const;
            jdouble getFlowRate(const JArray< jdouble > &) const;
            ::org::hipparchus::CalculusFieldElement getFlowRate(const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            jdouble getFlowRate(const ::org::orekit::time::AbsoluteDate &) const;
            ::java::util::List getParametersDrivers() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrustVector() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrustVector(const JArray< jdouble > &) const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getThrustVector(const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrustVector(const ::org::orekit::time::AbsoluteDate &) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          extern PyType_Def PY_TYPE_DEF(PythonAbstractConstantThrustPropulsionModel);
          extern PyTypeObject *PY_TYPE(PythonAbstractConstantThrustPropulsionModel);

          class t_PythonAbstractConstantThrustPropulsionModel {
          public:
            PyObject_HEAD
            PythonAbstractConstantThrustPropulsionModel object;
            static PyObject *wrap_Object(const PythonAbstractConstantThrustPropulsionModel&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
