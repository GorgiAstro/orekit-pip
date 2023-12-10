#ifndef org_orekit_forces_BoxAndSolarArraySpacecraft_H
#define org_orekit_forces_BoxAndSolarArraySpacecraft_H

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
  }
  namespace orekit {
    namespace forces {
      namespace radiation {
        class RadiationSensitive;
      }
      namespace drag {
        class DragSensitive;
      }
      class Panel;
    }
    namespace utils {
      class ParameterDriver;
      class ExtendedPVCoordinatesProvider;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {

      class BoxAndSolarArraySpacecraft : public ::java::lang::Object {
       public:
        enum {
          mid_init$_de3e021e7266b71e,
          mid_init$_f619ddf12a25c4b6,
          mid_buildBox_e4269e7e0f3ced71,
          mid_buildPanels_2c7040e42cd3a9fb,
          mid_dragAcceleration_6cbf0b5d7046f26b,
          mid_dragAcceleration_fc130a15f669db38,
          mid_getDragParametersDrivers_2afa36052df4765d,
          mid_getPanels_2afa36052df4765d,
          mid_getRadiationParametersDrivers_2afa36052df4765d,
          mid_radiationPressureAcceleration_c01594a6748cab78,
          mid_radiationPressureAcceleration_70d4c57af2df1a86,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BoxAndSolarArraySpacecraft(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BoxAndSolarArraySpacecraft(const BoxAndSolarArraySpacecraft& obj) : ::java::lang::Object(obj) {}

        BoxAndSolarArraySpacecraft(const ::java::util::List &);
        BoxAndSolarArraySpacecraft(jdouble, jdouble, jdouble, const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, jdouble, jdouble, jdouble);

        static ::java::util::List buildBox(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
        static ::java::util::List buildPanels(jdouble, jdouble, jdouble, const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, jdouble, jdouble, jdouble);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D dragAcceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D dragAcceleration(const ::org::orekit::propagation::SpacecraftState &, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const JArray< jdouble > &) const;
        ::java::util::List getDragParametersDrivers() const;
        ::java::util::List getPanels() const;
        ::java::util::List getRadiationParametersDrivers() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const JArray< jdouble > &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      extern PyType_Def PY_TYPE_DEF(BoxAndSolarArraySpacecraft);
      extern PyTypeObject *PY_TYPE(BoxAndSolarArraySpacecraft);

      class t_BoxAndSolarArraySpacecraft {
      public:
        PyObject_HEAD
        BoxAndSolarArraySpacecraft object;
        static PyObject *wrap_Object(const BoxAndSolarArraySpacecraft&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
