#ifndef org_orekit_forces_PythonForceModel_H
#define org_orekit_forces_PythonForceModel_H

#include "java/lang/Object.h"

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
    class Field;
  }
  namespace orekit {
    namespace propagation {
      namespace numerical {
        class FieldTimeDerivativesEquations;
        class TimeDerivativesEquations;
      }
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace forces {
      class ForceModel;
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

      class PythonForceModel : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_acceleration_61944e27a39e8290,
          mid_acceleration_b61fb59a041240c6,
          mid_addContribution_0f28031d74393af0,
          mid_addContribution_9ecc165cc3358de0,
          mid_dependsOnPositionOnly_89b302893bdbe1f1,
          mid_finalize_0640e6acf969ed28,
          mid_getParameterDriver_068d3bba04590913,
          mid_getParameters_a53a7513ecedada2,
          mid_getParameters_4ab353685404cfce,
          mid_getParametersDrivers_0d9551367f7ecdef,
          mid_init_0472264ad6f40bc2,
          mid_isSupported_fd2162b8a05a22fe,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonForceModel(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonForceModel(const PythonForceModel& obj) : ::java::lang::Object(obj) {}

        PythonForceModel();

        ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        void addContribution(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations &) const;
        void addContribution(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::numerical::TimeDerivativesEquations &) const;
        jboolean dependsOnPositionOnly() const;
        void finalize() const;
        ::org::orekit::utils::ParameterDriver getParameterDriver(const ::java::lang::String &) const;
        JArray< jdouble > getParameters() const;
        JArray< ::org::hipparchus::CalculusFieldElement > getParameters(const ::org::hipparchus::Field &) const;
        ::java::util::List getParametersDrivers() const;
        void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
        jboolean isSupported(const ::java::lang::String &) const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      extern PyType_Def PY_TYPE_DEF(PythonForceModel);
      extern PyTypeObject *PY_TYPE(PythonForceModel);

      class t_PythonForceModel {
      public:
        PyObject_HEAD
        PythonForceModel object;
        static PyObject *wrap_Object(const PythonForceModel&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
