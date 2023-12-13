#ifndef org_hipparchus_linear_ArrayRealVector_H
#define org_hipparchus_linear_ArrayRealVector_H

#include "org/hipparchus/linear/RealVector.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace analysis {
      class UnivariateFunction;
    }
    namespace linear {
      class RealVectorPreservingVisitor;
      class RealVectorChangingVisitor;
      class ArrayRealVector;
      class RealMatrix;
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
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_ab69da052b88f50c,
          mid_init$_c7e68cf2401062fd,
          mid_init$_872f190ac7ffe0f7,
          mid_init$_44ed599e93e8a30c,
          mid_init$_b670b6e7cd40e596,
          mid_init$_fd2e66a314bc77cb,
          mid_init$_136c54c807e8c570,
          mid_init$_0ad57d795b6bdcc2,
          mid_init$_14e96e1b42b3aaeb,
          mid_init$_b15baa0161a4e9c7,
          mid_init$_8fb9c03e955e6f39,
          mid_init$_2808bdf785b578a3,
          mid_init$_d5322b8b512aeb26,
          mid_init$_4484ad1f15b73c7a,
          mid_init$_b2d8b7a982f6fb43,
          mid_add_6191e02c06d75da8,
          mid_addToEntry_d5322b8b512aeb26,
          mid_append_4a88e3f3ab3e637f,
          mid_append_d5f1d017fd25113b,
          mid_append_0af7505d8931441d,
          mid_combine_981619d5e906c355,
          mid_combineToSelf_981619d5e906c355,
          mid_copy_b74ad06a0adaf5ef,
          mid_dotProduct_532b95759e51e831,
          mid_ebeDivide_6191e02c06d75da8,
          mid_ebeMultiply_6191e02c06d75da8,
          mid_equals_460c5e2d9d51c6cc,
          mid_getDataRef_25e1757a36c4dde2,
          mid_getDimension_55546ef6a647f39b,
          mid_getDistance_532b95759e51e831,
          mid_getEntry_2afcbc21f4e57ab2,
          mid_getL1Distance_532b95759e51e831,
          mid_getL1Norm_b74f83833fdad017,
          mid_getLInfDistance_532b95759e51e831,
          mid_getLInfNorm_b74f83833fdad017,
          mid_getNorm_b74f83833fdad017,
          mid_getSubVector_71fee5b03bacb96b,
          mid_hashCode_55546ef6a647f39b,
          mid_isInfinite_9ab94ac1dc23b105,
          mid_isNaN_9ab94ac1dc23b105,
          mid_map_d27eccf693724188,
          mid_mapAddToSelf_0af7505d8931441d,
          mid_mapDivideToSelf_0af7505d8931441d,
          mid_mapMultiplyToSelf_0af7505d8931441d,
          mid_mapSubtractToSelf_0af7505d8931441d,
          mid_mapToSelf_d27eccf693724188,
          mid_outerProduct_847a33a82b65c746,
          mid_set_8ba9fe7a847cecad,
          mid_setEntry_d5322b8b512aeb26,
          mid_setSubVector_75061e5f5bbace93,
          mid_setSubVector_9fe1e9c5bee9d07c,
          mid_subtract_6191e02c06d75da8,
          mid_toArray_25e1757a36c4dde2,
          mid_toString_1c1fa1e935d6cdcf,
          mid_walkInDefaultOrder_3b0a64df0d6d5970,
          mid_walkInDefaultOrder_5765b86ec2dc0005,
          mid_walkInDefaultOrder_e0df9aff405997ab,
          mid_walkInDefaultOrder_dc41fc18b07911cf,
          mid_walkInOptimizedOrder_3b0a64df0d6d5970,
          mid_walkInOptimizedOrder_5765b86ec2dc0005,
          mid_walkInOptimizedOrder_e0df9aff405997ab,
          mid_walkInOptimizedOrder_dc41fc18b07911cf,
          mid_checkVectorDimensions_872f190ac7ffe0f7,
          mid_checkVectorDimensions_44ed599e93e8a30c,
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
