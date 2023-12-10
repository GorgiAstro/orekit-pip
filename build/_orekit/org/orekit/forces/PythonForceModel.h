#ifndef org_orekit_forces_PythonForceModel_H
#define org_orekit_forces_PythonForceModel_H

#include "java/lang/Object.h"

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
    class Field;
  }
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace numerical {
        class FieldTimeDerivativesEquations;
        class TimeDerivativesEquations;
      }
      class SpacecraftState;
    }
    namespace forces {
      class ForceModel;
    }
    namespace time {
      class AbsoluteDate;
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
          mid_init$_0fa09c18fee449d5,
          mid_acceleration_b42ac4b5bfb80fab,
          mid_acceleration_8954761face5e1a7,
          mid_addContribution_5852b6ea0a71dcb4,
          mid_addContribution_9d1574df69c5f1ff,
          mid_dependsOnPositionOnly_b108b35ef48e27bd,
          mid_finalize_0fa09c18fee449d5,
          mid_getParameterDriver_32a37bc1292372ac,
          mid_getParameters_60c7040667a7dc5c,
          mid_getParameters_f040a403cffae196,
          mid_getParametersDrivers_2afa36052df4765d,
          mid_init_826b4eda94da4e78,
          mid_isSupported_7edad2c2f64f4d68,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
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

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
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
