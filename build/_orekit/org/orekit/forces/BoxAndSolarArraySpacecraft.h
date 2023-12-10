#ifndef org_orekit_forces_BoxAndSolarArraySpacecraft_H
#define org_orekit_forces_BoxAndSolarArraySpacecraft_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {
        class RadiationSensitive;
      }
      class Panel;
      namespace drag {
        class DragSensitive;
      }
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
      class ExtendedPVCoordinatesProvider;
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
    class CalculusFieldElement;
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
          mid_init$_65de9727799c5641,
          mid_init$_e6429e5de5c3a2c8,
          mid_buildBox_b9c4adb1e5979ca4,
          mid_buildPanels_2c13eb224defe6e0,
          mid_dragAcceleration_72c100be3e679e5e,
          mid_dragAcceleration_3061f9a13979e9fa,
          mid_getDragParametersDrivers_a6156df500549a58,
          mid_getPanels_a6156df500549a58,
          mid_getRadiationParametersDrivers_a6156df500549a58,
          mid_radiationPressureAcceleration_397d87bcad93c626,
          mid_radiationPressureAcceleration_5efc9e86ed57c6dd,
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
