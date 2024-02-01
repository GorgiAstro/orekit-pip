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
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      namespace numerical {
        class TimeDerivativesEquations;
        class FieldTimeDerivativesEquations;
      }
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace forces {
      class ForceModel;
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
          mid_init$_ff7cb6c242604316,
          mid_acceleration_9816b8f76e94356a,
          mid_acceleration_5e147f44c28a35c9,
          mid_addContribution_05bb906f491bab6b,
          mid_addContribution_2fcaaed225365615,
          mid_dependsOnPositionOnly_eee3de00fe971136,
          mid_finalize_ff7cb6c242604316,
          mid_getParameterDriver_a75a8a462ead0b8a,
          mid_getParameters_be783177b060994b,
          mid_getParameters_84f929c42eeec397,
          mid_getParametersDrivers_d751c1a57012b438,
          mid_init_14deaae988292d42,
          mid_isSupported_df4c65b2aede5c41,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
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
