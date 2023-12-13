#ifndef org_orekit_forces_drag_TimeSpanDragForce_H
#define org_orekit_forces_drag_TimeSpanDragForce_H

#include "org/orekit/forces/drag/AbstractDragForceModel.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          class Atmosphere;
        }
      }
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
      class TimeScale;
    }
    namespace propagation {
      namespace events {
        class EventDetector;
        class FieldEventDetector;
      }
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
      class TimeSpanMap$Span;
      class TimeSpanMap;
    }
    namespace forces {
      namespace drag {
        class DragSensitive;
      }
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
    class String;
  }
  namespace util {
    namespace stream {
      class Stream;
    }
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        class TimeSpanDragForce : public ::org::orekit::forces::drag::AbstractDragForceModel {
         public:
          enum {
            mid_init$_9d51f29c5e5b1e8b,
            mid_init$_f18a516710107195,
            mid_acceleration_0ce449c67b5ffd9c,
            mid_acceleration_20bded0292328743,
            mid_addDragSensitiveValidAfter_a24566f3f23eb049,
            mid_addDragSensitiveValidBefore_a24566f3f23eb049,
            mid_extractDragSensitiveRange_2917731b47ff4d6e,
            mid_extractParameters_5417afc1212505b6,
            mid_extractParameters_afb90c8392ccc216,
            mid_getDragSensitive_8dce189cfa5cc5ad,
            mid_getDragSensitiveSpan_d9699fc4c4f11b26,
            mid_getEventDetectors_14e21bf777ff0ccf,
            mid_getFieldEventDetectors_283ad33581c047a0,
            mid_getFirstSpan_5290b219f9ebfd63,
            mid_getParametersDrivers_e62d3bb06d56d7e3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TimeSpanDragForce(jobject obj) : ::org::orekit::forces::drag::AbstractDragForceModel(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TimeSpanDragForce(const TimeSpanDragForce& obj) : ::org::orekit::forces::drag::AbstractDragForceModel(obj) {}

          static ::java::lang::String *DATE_AFTER;
          static ::java::lang::String *DATE_BEFORE;

          TimeSpanDragForce(const ::org::orekit::models::earth::atmosphere::Atmosphere &, const ::org::orekit::forces::drag::DragSensitive &);
          TimeSpanDragForce(const ::org::orekit::models::earth::atmosphere::Atmosphere &, const ::org::orekit::forces::drag::DragSensitive &, const ::org::orekit::time::TimeScale &);

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          void addDragSensitiveValidAfter(const ::org::orekit::forces::drag::DragSensitive &, const ::org::orekit::time::AbsoluteDate &) const;
          void addDragSensitiveValidBefore(const ::org::orekit::forces::drag::DragSensitive &, const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::utils::TimeSpanMap extractDragSensitiveRange(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &) const;
          JArray< jdouble > extractParameters(const JArray< jdouble > &, const ::org::orekit::time::AbsoluteDate &) const;
          JArray< ::org::hipparchus::CalculusFieldElement > extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::orekit::time::FieldAbsoluteDate &) const;
          ::org::orekit::forces::drag::DragSensitive getDragSensitive(const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::utils::TimeSpanMap$Span getDragSensitiveSpan(const ::org::orekit::time::AbsoluteDate &) const;
          ::java::util::stream::Stream getEventDetectors() const;
          ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
          ::org::orekit::utils::TimeSpanMap$Span getFirstSpan() const;
          ::java::util::List getParametersDrivers() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {
        extern PyType_Def PY_TYPE_DEF(TimeSpanDragForce);
        extern PyTypeObject *PY_TYPE(TimeSpanDragForce);

        class t_TimeSpanDragForce {
        public:
          PyObject_HEAD
          TimeSpanDragForce object;
          static PyObject *wrap_Object(const TimeSpanDragForce&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
