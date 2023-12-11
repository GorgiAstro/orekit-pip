#ifndef org_orekit_utils_ParameterDriver_H
#define org_orekit_utils_ParameterDriver_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
    }
  }
  namespace orekit {
    namespace utils {
      class TimeSpanMap;
      class ParameterDriver;
      class ParameterObserver;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    class List;
    class Map;
  }
  namespace lang {
    class Integer;
    class Double;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class ParameterDriver : public ::java::lang::Object {
       public:
        enum {
          mid_init$_11f34b240685d435,
          mid_init$_1a8ac44f48354981,
          mid_addObserver_e6d393940d6a20e3,
          mid_addSpanAtDate_20affcbd28542333,
          mid_addSpans_51833a49fce6cea6,
          mid_getMaxValue_557b8123390d8d0c,
          mid_getMinValue_557b8123390d8d0c,
          mid_getName_3cffd47377eca18a,
          mid_getNameSpan_4e0f3c605fbc7c96,
          mid_getNamesSpanMap_d26bd874ee319049,
          mid_getNbOfValues_412668abc8d889e9,
          mid_getNormalizedValue_557b8123390d8d0c,
          mid_getNormalizedValue_b0b988f941da47d8,
          mid_getObservers_0d9551367f7ecdef,
          mid_getReferenceDate_7a97f7e149e79afb,
          mid_getReferenceValue_557b8123390d8d0c,
          mid_getScale_557b8123390d8d0c,
          mid_getTransitionDates_19f19b9ba44d5ed6,
          mid_getValue_557b8123390d8d0c,
          mid_getValue_b0b988f941da47d8,
          mid_getValue_e97c9d07fe9d7cd6,
          mid_getValue_96022c3a4c0b72a5,
          mid_getValueContinuousEstimation_b0b988f941da47d8,
          mid_getValueSpanMap_d26bd874ee319049,
          mid_getValueStepEstimation_b0b988f941da47d8,
          mid_getValues_a53a7513ecedada2,
          mid_isContinuousEstimation_89b302893bdbe1f1,
          mid_isSelected_89b302893bdbe1f1,
          mid_removeObserver_e6d393940d6a20e3,
          mid_replaceObserver_3b5319961730db27,
          mid_setContinuousEstimation_ed2afdb8506b9742,
          mid_setMaxValue_10f281d777284cea,
          mid_setMinValue_10f281d777284cea,
          mid_setName_f5ffdf29129ef90a,
          mid_setNormalizedValue_10f281d777284cea,
          mid_setNormalizedValue_4ca6118c75b70100,
          mid_setReferenceDate_20affcbd28542333,
          mid_setReferenceValue_10f281d777284cea,
          mid_setScale_10f281d777284cea,
          mid_setSelected_ed2afdb8506b9742,
          mid_setValue_10f281d777284cea,
          mid_setValue_4ca6118c75b70100,
          mid_setValueSpanMap_558cfe74a49f563f,
          mid_toString_3cffd47377eca18a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ParameterDriver(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ParameterDriver(const ParameterDriver& obj) : ::java::lang::Object(obj) {}

        ParameterDriver(const ::java::lang::String &, jdouble, jdouble, jdouble, jdouble);
        ParameterDriver(const ::java::lang::String &, const ::org::orekit::utils::TimeSpanMap &, const ::org::orekit::utils::TimeSpanMap &, jdouble, jdouble, jdouble, jdouble);

        void addObserver(const ::org::orekit::utils::ParameterObserver &) const;
        void addSpanAtDate(const ::org::orekit::time::AbsoluteDate &) const;
        void addSpans(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &, jdouble) const;
        jdouble getMaxValue() const;
        jdouble getMinValue() const;
        ::java::lang::String getName() const;
        ::java::lang::String getNameSpan(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::utils::TimeSpanMap getNamesSpanMap() const;
        jint getNbOfValues() const;
        jdouble getNormalizedValue() const;
        jdouble getNormalizedValue(const ::org::orekit::time::AbsoluteDate &) const;
        ::java::util::List getObservers() const;
        ::org::orekit::time::AbsoluteDate getReferenceDate() const;
        jdouble getReferenceValue() const;
        jdouble getScale() const;
        JArray< ::org::orekit::time::AbsoluteDate > getTransitionDates() const;
        jdouble getValue() const;
        jdouble getValue(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::analysis::differentiation::Gradient getValue(jint, const ::java::util::Map &) const;
        ::org::hipparchus::analysis::differentiation::Gradient getValue(jint, const ::java::util::Map &, const ::org::orekit::time::AbsoluteDate &) const;
        jdouble getValueContinuousEstimation(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::utils::TimeSpanMap getValueSpanMap() const;
        jdouble getValueStepEstimation(const ::org::orekit::time::AbsoluteDate &) const;
        JArray< jdouble > getValues() const;
        jboolean isContinuousEstimation() const;
        jboolean isSelected() const;
        void removeObserver(const ::org::orekit::utils::ParameterObserver &) const;
        void replaceObserver(const ::org::orekit::utils::ParameterObserver &, const ::org::orekit::utils::ParameterObserver &) const;
        void setContinuousEstimation(jboolean) const;
        void setMaxValue(jdouble) const;
        void setMinValue(jdouble) const;
        void setName(const ::java::lang::String &) const;
        void setNormalizedValue(jdouble) const;
        void setNormalizedValue(jdouble, const ::org::orekit::time::AbsoluteDate &) const;
        void setReferenceDate(const ::org::orekit::time::AbsoluteDate &) const;
        void setReferenceValue(jdouble) const;
        void setScale(jdouble) const;
        void setSelected(jboolean) const;
        void setValue(jdouble) const;
        void setValue(jdouble, const ::org::orekit::time::AbsoluteDate &) const;
        void setValueSpanMap(const ParameterDriver &) const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(ParameterDriver);
      extern PyTypeObject *PY_TYPE(ParameterDriver);

      class t_ParameterDriver {
      public:
        PyObject_HEAD
        ParameterDriver object;
        static PyObject *wrap_Object(const ParameterDriver&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
