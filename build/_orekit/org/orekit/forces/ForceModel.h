#ifndef org_orekit_forces_ForceModel_H
#define org_orekit_forces_ForceModel_H

#include "org/orekit/utils/ParameterDriversProvider.h"

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
      namespace events {
        class EventDetector;
        class FieldEventDetector;
        class EventDetectorsProvider;
      }
      namespace numerical {
        class FieldTimeDerivativesEquations;
        class TimeDerivativesEquations;
      }
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
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
          mid_acceleration_8954761face5e1a7,
          mid_acceleration_b42ac4b5bfb80fab,
          mid_addContribution_5852b6ea0a71dcb4,
          mid_addContribution_9d1574df69c5f1ff,
          mid_dependsOnPositionOnly_b108b35ef48e27bd,
          mid_getEventDetectors_20f6d2b462aaef4b,
          mid_getFieldEventDetectors_361313cd1a9c693a,
          mid_init_826b4eda94da4e78,
          mid_init_8e8de2be1664674a,
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
