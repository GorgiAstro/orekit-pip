#ifndef org_hipparchus_linear_ArrayRealVector_H
#define org_hipparchus_linear_ArrayRealVector_H

#include "org/hipparchus/linear/RealVector.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class ArrayRealVector;
      class RealVectorChangingVisitor;
      class RealVectorPreservingVisitor;
      class RealMatrix;
    }
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace analysis {
      class UnivariateFunction;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Double;
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class ArrayRealVector : public ::org::hipparchus::linear::RealVector {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_init$_a71c45509eaf92d1,
          mid_init$_3d3b8362311739ce,
          mid_init$_99bb541b0ecf3230,
          mid_init$_8fd427ab23829bf5,
          mid_init$_7c23bb29028e712a,
          mid_init$_7c7f2fc5b5d9992b,
          mid_init$_5f105d12ef405967,
          mid_init$_8e6ec2c6f1e831c9,
          mid_init$_c3c008407ccc44ca,
          mid_init$_64100e41ba74de8f,
          mid_init$_b235ce1aa125cb15,
          mid_init$_d202a20516e33d93,
          mid_init$_4320462275d66e78,
          mid_init$_40b495c766d36227,
          mid_init$_0f6c3734673b0d94,
          mid_add_baad192f2dc523c0,
          mid_addToEntry_4320462275d66e78,
          mid_append_a5c77f958bab126d,
          mid_append_bf8d75e459632544,
          mid_append_2fd46ead8ae05f47,
          mid_combine_f3d5e62a37a3baa7,
          mid_combineToSelf_f3d5e62a37a3baa7,
          mid_copy_1d9098bb44dd5bb9,
          mid_dotProduct_510dfb60b80a1bc5,
          mid_ebeDivide_baad192f2dc523c0,
          mid_ebeMultiply_baad192f2dc523c0,
          mid_equals_72faff9b05f5ed5e,
          mid_getDataRef_be783177b060994b,
          mid_getDimension_d6ab429752e7c267,
          mid_getDistance_510dfb60b80a1bc5,
          mid_getEntry_ce4c02d583456bc9,
          mid_getL1Distance_510dfb60b80a1bc5,
          mid_getL1Norm_9981f74b2d109da6,
          mid_getLInfDistance_510dfb60b80a1bc5,
          mid_getLInfNorm_9981f74b2d109da6,
          mid_getNorm_9981f74b2d109da6,
          mid_getSubVector_b1d2e600b579c4fa,
          mid_hashCode_d6ab429752e7c267,
          mid_isInfinite_eee3de00fe971136,
          mid_isNaN_eee3de00fe971136,
          mid_map_b4017d5f7c7ea190,
          mid_mapAddToSelf_2fd46ead8ae05f47,
          mid_mapDivideToSelf_2fd46ead8ae05f47,
          mid_mapMultiplyToSelf_2fd46ead8ae05f47,
          mid_mapSubtractToSelf_2fd46ead8ae05f47,
          mid_mapToSelf_b4017d5f7c7ea190,
          mid_outerProduct_628dcdd789dfced9,
          mid_set_1ad26e8c8c0cd65b,
          mid_setEntry_4320462275d66e78,
          mid_setSubVector_9d367e34fba0a5ea,
          mid_setSubVector_543485b1a87e5329,
          mid_subtract_baad192f2dc523c0,
          mid_toArray_be783177b060994b,
          mid_toString_d2c8eb4129821f0e,
          mid_walkInDefaultOrder_8785ef13fe18157c,
          mid_walkInDefaultOrder_5b6053a1b36387e3,
          mid_walkInDefaultOrder_a2c6d27191254d22,
          mid_walkInDefaultOrder_710a99d12629b412,
          mid_walkInOptimizedOrder_8785ef13fe18157c,
          mid_walkInOptimizedOrder_5b6053a1b36387e3,
          mid_walkInOptimizedOrder_a2c6d27191254d22,
          mid_walkInOptimizedOrder_710a99d12629b412,
          mid_checkVectorDimensions_99bb541b0ecf3230,
          mid_checkVectorDimensions_8fd427ab23829bf5,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ArrayRealVector(jobject obj) : ::org::hipparchus::linear::RealVector(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ArrayRealVector(const ArrayRealVector& obj) : ::org::hipparchus::linear::RealVector(obj) {}

        ArrayRealVector();
        ArrayRealVector(const JArray< jdouble > &);
        ArrayRealVector(const JArray< ::java::lang::Double > &);
        ArrayRealVector(const ::org::hipparchus::linear::RealVector &);
        ArrayRealVector(jint);
        ArrayRealVector(const ArrayRealVector &, const ArrayRealVector &);
        ArrayRealVector(const ArrayRealVector &, const JArray< jdouble > &);
        ArrayRealVector(const JArray< jdouble > &, const ArrayRealVector &);
        ArrayRealVector(const ArrayRealVector &, const ::org::hipparchus::linear::RealVector &);
        ArrayRealVector(const ::org::hipparchus::linear::RealVector &, const ArrayRealVector &);
        ArrayRealVector(const JArray< jdouble > &, const JArray< jdouble > &);
        ArrayRealVector(const ArrayRealVector &, jboolean);
        ArrayRealVector(const JArray< jdouble > &, jboolean);
        ArrayRealVector(jint, jdouble);
        ArrayRealVector(const JArray< jdouble > &, jint, jint);
        ArrayRealVector(const JArray< ::java::lang::Double > &, jint, jint);

        ArrayRealVector add(const ::org::hipparchus::linear::RealVector &) const;
        void addToEntry(jint, jdouble) const;
        ArrayRealVector append(const ArrayRealVector &) const;
        ::org::hipparchus::linear::RealVector append(const ::org::hipparchus::linear::RealVector &) const;
        ::org::hipparchus::linear::RealVector append(jdouble) const;
        ArrayRealVector combine(jdouble, jdouble, const ::org::hipparchus::linear::RealVector &) const;
        ArrayRealVector combineToSelf(jdouble, jdouble, const ::org::hipparchus::linear::RealVector &) const;
        ArrayRealVector copy() const;
        jdouble dotProduct(const ::org::hipparchus::linear::RealVector &) const;
        ArrayRealVector ebeDivide(const ::org::hipparchus::linear::RealVector &) const;
        ArrayRealVector ebeMultiply(const ::org::hipparchus::linear::RealVector &) const;
        jboolean equals(const ::java::lang::Object &) const;
        JArray< jdouble > getDataRef() const;
        jint getDimension() const;
        jdouble getDistance(const ::org::hipparchus::linear::RealVector &) const;
        jdouble getEntry(jint) const;
        jdouble getL1Distance(const ::org::hipparchus::linear::RealVector &) const;
        jdouble getL1Norm() const;
        jdouble getLInfDistance(const ::org::hipparchus::linear::RealVector &) const;
        jdouble getLInfNorm() const;
        jdouble getNorm() const;
        ::org::hipparchus::linear::RealVector getSubVector(jint, jint) const;
        jint hashCode() const;
        jboolean isInfinite() const;
        jboolean isNaN() const;
        ArrayRealVector map(const ::org::hipparchus::analysis::UnivariateFunction &) const;
        ::org::hipparchus::linear::RealVector mapAddToSelf(jdouble) const;
        ::org::hipparchus::linear::RealVector mapDivideToSelf(jdouble) const;
        ::org::hipparchus::linear::RealVector mapMultiplyToSelf(jdouble) const;
        ::org::hipparchus::linear::RealVector mapSubtractToSelf(jdouble) const;
        ArrayRealVector mapToSelf(const ::org::hipparchus::analysis::UnivariateFunction &) const;
        ::org::hipparchus::linear::RealMatrix outerProduct(const ::org::hipparchus::linear::RealVector &) const;
        void set(jdouble) const;
        void setEntry(jint, jdouble) const;
        void setSubVector(jint, const JArray< jdouble > &) const;
        void setSubVector(jint, const ::org::hipparchus::linear::RealVector &) const;
        ArrayRealVector subtract(const ::org::hipparchus::linear::RealVector &) const;
        JArray< jdouble > toArray() const;
        ::java::lang::String toString() const;
        jdouble walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor &) const;
        jdouble walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor &) const;
        jdouble walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor &, jint, jint) const;
        jdouble walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor &, jint, jint) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor &) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor &) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor &, jint, jint) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor &, jint, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(ArrayRealVector);
      extern PyTypeObject *PY_TYPE(ArrayRealVector);

      class t_ArrayRealVector {
      public:
        PyObject_HEAD
        ArrayRealVector object;
        static PyObject *wrap_Object(const ArrayRealVector&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
