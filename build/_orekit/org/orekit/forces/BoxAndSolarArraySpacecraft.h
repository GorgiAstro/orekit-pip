#ifndef org_orekit_forces_BoxAndSolarArraySpacecraft_H
#define org_orekit_forces_BoxAndSolarArraySpacecraft_H

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
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class ExtendedPVCoordinatesProvider;
      class ParameterDriver;
    }
    namespace forces {
      namespace radiation {
        class RadiationSensitive;
      }
      namespace drag {
        class DragSensitive;
      }
      class Panel;
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
          mid_init$_4ccaedadb068bdeb,
          mid_init$_557121873802722e,
          mid_buildBox_1a565ea8d1d30b76,
          mid_buildPanels_54f4a04d08f6adbc,
          mid_dragAcceleration_bc16b30ecfb3a4cc,
          mid_dragAcceleration_59d392869e8fa633,
          mid_getDragParametersDrivers_0d9551367f7ecdef,
          mid_getPanels_0d9551367f7ecdef,
          mid_getRadiationParametersDrivers_0d9551367f7ecdef,
          mid_radiationPressureAcceleration_a910b2c2e7db1f82,
          mid_radiationPressureAcceleration_122b60d0431fddf5,
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
        ::org::hipparchus::geometry::euclidean::threed::Vector3D dragAcceleration(const ::org::orekit::propagation::SpacecraftState &, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const JArray< jdouble > &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D dragAcceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        ::java::util::List getDragParametersDrivers() const;
        ::java::util::List getPanels() const;
        ::java::util::List getRadiationParametersDrivers() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const JArray< jdouble > &) const;
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
