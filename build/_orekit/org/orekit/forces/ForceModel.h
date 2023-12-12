#ifndef org_orekit_forces_ForceModel_H
#define org_orekit_forces_ForceModel_H

#include "org/orekit/utils/ParameterDriversProvider.h"

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
    namespace propagation {
      namespace numerical {
        class FieldTimeDerivativesEquations;
        class TimeDerivativesEquations;
      }
      class FieldSpacecraftState;
      namespace events {
        class EventDetectorsProvider;
        class EventDetector;
        class FieldEventDetector;
      }
      class SpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    namespace stream {
      class Stream;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {

      class ForceModel : public ::org::orekit::utils::ParameterDriversProvider {
       public:
        enum {
          mid_acceleration_61944e27a39e8290,
          mid_acceleration_b61fb59a041240c6,
          mid_addContribution_0f28031d74393af0,
          mid_addContribution_9ecc165cc3358de0,
          mid_dependsOnPositionOnly_89b302893bdbe1f1,
          mid_getEventDetectors_d7cce92225eb0db2,
          mid_getFieldEventDetectors_8130af76f6998f44,
          mid_init_0472264ad6f40bc2,
          mid_init_811e49dad2467b67,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ForceModel(jobject obj) : ::org::orekit::utils::ParameterDriversProvider(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ForceModel(const ForceModel& obj) : ::org::orekit::utils::ParameterDriversProvider(obj) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        void addContribution(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations &) const;
        void addContribution(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::numerical::TimeDerivativesEquations &) const;
        jboolean dependsOnPositionOnly() const;
        ::java::util::stream::Stream getEventDetectors() const;
        ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
        void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
        void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      extern PyType_Def PY_TYPE_DEF(ForceModel);
      extern PyTypeObject *PY_TYPE(ForceModel);

      class t_ForceModel {
      public:
        PyObject_HEAD
        ForceModel object;
        static PyObject *wrap_Object(const ForceModel&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
