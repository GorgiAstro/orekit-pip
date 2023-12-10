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
      class ParameterObserver;
      class TimeSpanMap;
      class ParameterDriver;
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
          mid_init$_117a615685ad06d4,
          mid_init$_b9c5dea347bbd126,
          mid_addObserver_10ec387243ac2368,
          mid_addSpanAtDate_e82d68cd9f886886,
          mid_addSpans_dff5f80cc61c17ba,
          mid_getMaxValue_456d9a2f64d6b28d,
          mid_getMinValue_456d9a2f64d6b28d,
          mid_getName_0090f7797e403f43,
          mid_getNameSpan_f6573813807bab89,
          mid_getNamesSpanMap_afbf756dd3c251fe,
          mid_getNbOfValues_f2f64475e4580546,
          mid_getNormalizedValue_456d9a2f64d6b28d,
          mid_getNormalizedValue_e912d21057defe63,
          mid_getObservers_a6156df500549a58,
          mid_getReferenceDate_aaa854c403487cf3,
          mid_getReferenceValue_456d9a2f64d6b28d,
          mid_getScale_456d9a2f64d6b28d,
          mid_getTransitionDates_31d24b9f6973b442,
          mid_getValue_456d9a2f64d6b28d,
          mid_getValue_e912d21057defe63,
          mid_getValue_fde3b00728577c47,
          mid_getValue_2f41a7b9463c5c72,
          mid_getValueContinuousEstimation_e912d21057defe63,
          mid_getValueSpanMap_afbf756dd3c251fe,
          mid_getValueStepEstimation_e912d21057defe63,
          mid_getValues_7cdc325af0834901,
          mid_isContinuousEstimation_e470b6d9e0d979db,
          mid_isSelected_e470b6d9e0d979db,
          mid_removeObserver_10ec387243ac2368,
          mid_replaceObserver_90fdcc75fd2f45f9,
          mid_setContinuousEstimation_50a2e0b139e80a58,
          mid_setMaxValue_77e0f9a1f260e2e5,
          mid_setMinValue_77e0f9a1f260e2e5,
          mid_setName_e939c6558ae8d313,
          mid_setNormalizedValue_77e0f9a1f260e2e5,
          mid_setNormalizedValue_82dcc83e88ee1b1f,
          mid_setReferenceDate_e82d68cd9f886886,
          mid_setReferenceValue_77e0f9a1f260e2e5,
          mid_setScale_77e0f9a1f260e2e5,
          mid_setSelected_50a2e0b139e80a58,
          mid_setValue_77e0f9a1f260e2e5,
          mid_setValue_82dcc83e88ee1b1f,
          mid_setValueSpanMap_a4c33e1e91b3ca8e,
          mid_toString_0090f7797e403f43,
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
