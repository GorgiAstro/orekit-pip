#ifndef org_orekit_forces_maneuvers_propulsion_PythonAbstractConstantThrustPropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_PythonAbstractConstantThrustPropulsionModel_H

#include "org/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriver;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace forces {
      namespace maneuvers {
        class Control3DVectorCostType;
      }
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
              mid_init$_33b1676e2cf06e6c,
              mid_finalize_ff7cb6c242604316,
              mid_getFlowRate_9981f74b2d109da6,
              mid_getFlowRate_a40ce4fdf6559ac0,
              mid_getFlowRate_c04968ee695d037c,
              mid_getFlowRate_209f08246d708042,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_getThrustVector_032312bdeb3f2f93,
              mid_getThrustVector_44a47ea31a9889e8,
              mid_getThrustVector_5e5894038af17774,
              mid_getThrustVector_8b37cafaaf55a3a5,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
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
