#ifndef org_orekit_forces_ForceModel_H
#define org_orekit_forces_ForceModel_H

#include "org/orekit/utils/ParameterDriversProvider.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        class FieldTimeDerivativesEquations;
        class TimeDerivativesEquations;
      }
      namespace events {
        class FieldEventDetector;
        class EventDetector;
        class EventDetectorsProvider;
      }
      class SpacecraftState;
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
        }
      }
    }
    class Field;
    class CalculusFieldElement;
  }
}
namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {

      class ForceModel : public ::org::orekit::utils::ParameterDriversProvider {
       public:
        enum {
          mid_acceleration_00aba28d3abe9a8c,
          mid_acceleration_78989e44b99f7cc2,
          mid_addContribution_3ae28f2cc7cbb00b,
          mid_addContribution_170c8a5902f676b2,
          mid_dependsOnPositionOnly_e470b6d9e0d979db,
          mid_getEventDetectors_a68a17dd093f796d,
          mid_getFieldEventDetectors_1328ddb491531a35,
          mid_init_3d13474d79f5e7bc,
          mid_init_acdd8180a5dc1a8d,
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
