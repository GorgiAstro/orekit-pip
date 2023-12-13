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
      class FieldSpacecraftState;
      class SpacecraftState;
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
          mid_acceleration_0ce449c67b5ffd9c,
          mid_acceleration_20bded0292328743,
          mid_addContribution_6aa2b69cacacea60,
          mid_addContribution_ab5e59960ebc27c2,
          mid_dependsOnPositionOnly_9ab94ac1dc23b105,
          mid_getEventDetectors_14e21bf777ff0ccf,
          mid_getFieldEventDetectors_283ad33581c047a0,
          mid_init_96d019f392abf918,
          mid_init_2d7f9a496c7e9781,
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

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
        void addContribution(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations &) const;
        void addContribution(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::numerical::TimeDerivativesEquations &) const;
        jboolean dependsOnPositionOnly() const;
        ::java::util::stream::Stream getEventDetectors() const;
        ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
        void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
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
