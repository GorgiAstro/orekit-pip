#ifndef org_orekit_forces_ForceModel_H
#define org_orekit_forces_ForceModel_H

#include "org/orekit/utils/ParameterDriversProvider.h"

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
namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class EventDetectorsProvider;
        class EventDetector;
      }
      namespace numerical {
        class TimeDerivativesEquations;
        class FieldTimeDerivativesEquations;
      }
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
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
    class Field;
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {

      class ForceModel : public ::org::orekit::utils::ParameterDriversProvider {
       public:
        enum {
          mid_acceleration_5e147f44c28a35c9,
          mid_acceleration_9816b8f76e94356a,
          mid_addContribution_05bb906f491bab6b,
          mid_addContribution_2fcaaed225365615,
          mid_dependsOnPositionOnly_eee3de00fe971136,
          mid_getEventDetectors_11e4ca8182c1933d,
          mid_getFieldEventDetectors_d3db121d9deb0312,
          mid_init_14deaae988292d42,
          mid_init_357211ab77703f3f,
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
