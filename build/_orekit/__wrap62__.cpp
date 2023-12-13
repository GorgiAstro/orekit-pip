#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/UnixCompressFilter.h"
#include "org/orekit/data/DataFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *UnixCompressFilter::class$ = NULL;
      jmethodID *UnixCompressFilter::mids$ = NULL;
      bool UnixCompressFilter::live$ = false;

      jclass UnixCompressFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/UnixCompressFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_filter_bbc30294b1b0b691] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UnixCompressFilter::UnixCompressFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      ::org::orekit::data::DataSource UnixCompressFilter::filter(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_bbc30294b1b0b691], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_UnixCompressFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnixCompressFilter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UnixCompressFilter_init_(t_UnixCompressFilter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UnixCompressFilter_filter(t_UnixCompressFilter *self, PyObject *arg);

      static PyMethodDef t_UnixCompressFilter__methods_[] = {
        DECLARE_METHOD(t_UnixCompressFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnixCompressFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnixCompressFilter, filter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnixCompressFilter)[] = {
        { Py_tp_methods, t_UnixCompressFilter__methods_ },
        { Py_tp_init, (void *) t_UnixCompressFilter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnixCompressFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnixCompressFilter, t_UnixCompressFilter, UnixCompressFilter);

      void t_UnixCompressFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(UnixCompressFilter), &PY_TYPE_DEF(UnixCompressFilter), module, "UnixCompressFilter", 0);
      }

      void t_UnixCompressFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnixCompressFilter), "class_", make_descriptor(UnixCompressFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnixCompressFilter), "wrapfn_", make_descriptor(t_UnixCompressFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnixCompressFilter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnixCompressFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnixCompressFilter::initializeClass, 1)))
          return NULL;
        return t_UnixCompressFilter::wrap_Object(UnixCompressFilter(((t_UnixCompressFilter *) arg)->object.this$));
      }
      static PyObject *t_UnixCompressFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnixCompressFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UnixCompressFilter_init_(t_UnixCompressFilter *self, PyObject *args, PyObject *kwds)
      {
        UnixCompressFilter object((jobject) NULL);

        INT_CALL(object = UnixCompressFilter());
        self->object = object;

        return 0;
      }

      static PyObject *t_UnixCompressFilter_filter(t_UnixCompressFilter *self, PyObject *arg)
      {
        ::org::orekit::data::DataSource a0((jobject) NULL);
        ::org::orekit::data::DataSource result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.filter(a0));
          return ::org::orekit::data::t_DataSource::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "filter", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *MeasurementCombination::class$ = NULL;
          jmethodID *MeasurementCombination::mids$ = NULL;
          bool MeasurementCombination::live$ = false;

          jclass MeasurementCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/MeasurementCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_combine_12b3dc80befaeb6c] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet MeasurementCombination::combine(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet(env->callObjectMethod(this$, mids$[mid_combine_12b3dc80befaeb6c], a0.this$));
          }

          ::java::lang::String MeasurementCombination::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_MeasurementCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombination_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombination_combine(t_MeasurementCombination *self, PyObject *arg);
          static PyObject *t_MeasurementCombination_getName(t_MeasurementCombination *self);
          static PyObject *t_MeasurementCombination_get__name(t_MeasurementCombination *self, void *data);
          static PyGetSetDef t_MeasurementCombination__fields_[] = {
            DECLARE_GET_FIELD(t_MeasurementCombination, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MeasurementCombination__methods_[] = {
            DECLARE_METHOD(t_MeasurementCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombination, combine, METH_O),
            DECLARE_METHOD(t_MeasurementCombination, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MeasurementCombination)[] = {
            { Py_tp_methods, t_MeasurementCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MeasurementCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MeasurementCombination)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MeasurementCombination, t_MeasurementCombination, MeasurementCombination);

          void t_MeasurementCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(MeasurementCombination), &PY_TYPE_DEF(MeasurementCombination), module, "MeasurementCombination", 0);
          }

          void t_MeasurementCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombination), "class_", make_descriptor(MeasurementCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombination), "wrapfn_", make_descriptor(t_MeasurementCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MeasurementCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MeasurementCombination::initializeClass, 1)))
              return NULL;
            return t_MeasurementCombination::wrap_Object(MeasurementCombination(((t_MeasurementCombination *) arg)->object.this$));
          }
          static PyObject *t_MeasurementCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MeasurementCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MeasurementCombination_combine(t_MeasurementCombination *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.combine(a0));
              return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationDataSet::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "combine", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombination_getName(t_MeasurementCombination *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_MeasurementCombination_get__name(t_MeasurementCombination *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/UpperBounds.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *UpperBounds::class$ = NULL;
            jmethodID *UpperBounds::mids$ = NULL;
            bool UpperBounds::live$ = false;

            jclass UpperBounds::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/UpperBounds");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getDnl_d25194b4f827d7c5] = env->getStaticMethodID(cls, "getDnl", "(DDII)D");
                mids$[mid_getDnl_34b1c27dc860e066] = env->getStaticMethodID(cls, "getDnl", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRnml_afb4449d3b8211f3] = env->getStaticMethodID(cls, "getRnml", "(DIIIII)D");
                mids$[mid_getRnml_079d686a67b20272] = env->getStaticMethodID(cls, "getRnml", "(Lorg/hipparchus/CalculusFieldElement;IIIII)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble UpperBounds::getDnl(jdouble a0, jdouble a1, jint a2, jint a3)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_getDnl_d25194b4f827d7c5], a0, a1, a2, a3);
            }

            ::org::hipparchus::CalculusFieldElement UpperBounds::getDnl(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, jint a2, jint a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_getDnl_34b1c27dc860e066], a0.this$, a1.this$, a2, a3));
            }

            jdouble UpperBounds::getRnml(jdouble a0, jint a1, jint a2, jint a3, jint a4, jint a5)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_getRnml_afb4449d3b8211f3], a0, a1, a2, a3, a4, a5);
            }

            ::org::hipparchus::CalculusFieldElement UpperBounds::getRnml(const ::org::hipparchus::CalculusFieldElement & a0, jint a1, jint a2, jint a3, jint a4, jint a5)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_getRnml_079d686a67b20272], a0.this$, a1, a2, a3, a4, a5));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            static PyObject *t_UpperBounds_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UpperBounds_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UpperBounds_getDnl(PyTypeObject *type, PyObject *args);
            static PyObject *t_UpperBounds_getRnml(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_UpperBounds__methods_[] = {
              DECLARE_METHOD(t_UpperBounds, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UpperBounds, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UpperBounds, getDnl, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_UpperBounds, getRnml, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(UpperBounds)[] = {
              { Py_tp_methods, t_UpperBounds__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(UpperBounds)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(UpperBounds, t_UpperBounds, UpperBounds);

            void t_UpperBounds::install(PyObject *module)
            {
              installType(&PY_TYPE(UpperBounds), &PY_TYPE_DEF(UpperBounds), module, "UpperBounds", 0);
            }

            void t_UpperBounds::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(UpperBounds), "class_", make_descriptor(UpperBounds::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UpperBounds), "wrapfn_", make_descriptor(t_UpperBounds::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UpperBounds), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_UpperBounds_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, UpperBounds::initializeClass, 1)))
                return NULL;
              return t_UpperBounds::wrap_Object(UpperBounds(((t_UpperBounds *) arg)->object.this$));
            }
            static PyObject *t_UpperBounds_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, UpperBounds::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_UpperBounds_getDnl(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 4:
                {
                  jdouble a0;
                  jdouble a1;
                  jint a2;
                  jint a3;
                  jdouble result;

                  if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::UpperBounds::getDnl(a0, a1, a2, a3));
                    return PyFloat_FromDouble((double) result);
                  }
                }
                {
                  ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                  PyTypeObject **p1;
                  jint a2;
                  jint a3;
                  ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                  if (!parseArgs(args, "KKII", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::UpperBounds::getDnl(a0, a1, a2, a3));
                    return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError(type, "getDnl", args);
              return NULL;
            }

            static PyObject *t_UpperBounds_getRnml(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 6:
                {
                  jdouble a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jint a5;
                  jdouble result;

                  if (!parseArgs(args, "DIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::UpperBounds::getRnml(a0, a1, a2, a3, a4, a5));
                    return PyFloat_FromDouble((double) result);
                  }
                }
                {
                  ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                  PyTypeObject **p0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jint a5;
                  ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                  if (!parseArgs(args, "KIIIII", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &a4, &a5))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::UpperBounds::getRnml(a0, a1, a2, a3, a4, a5));
                    return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError(type, "getRnml", args);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/OpenMapRealMatrix.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/linear/OpenMapRealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/SparseRealMatrix.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *OpenMapRealMatrix::class$ = NULL;
      jmethodID *OpenMapRealMatrix::mids$ = NULL;
      bool OpenMapRealMatrix::live$ = false;

      jclass OpenMapRealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/OpenMapRealMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3313c75e3e16c428] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_add_9ab78a1295afd3f2] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/OpenMapRealMatrix;)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_addToEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_fb3c06abb38b6709] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_createMatrix_b6b8c117f363e6a5] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_getColumnDimension_55546ef6a647f39b] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getEntry_cad98089d00f8a5b] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getRowDimension_55546ef6a647f39b] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_multiply_9ab78a1295afd3f2] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/OpenMapRealMatrix;)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_multiply_be124f4006dc9f69] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_be124f4006dc9f69] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_subtract_9ab78a1295afd3f2] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/OpenMapRealMatrix;)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_subtract_c9ead5188e390bab] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_transposeMultiply_be124f4006dc9f69] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OpenMapRealMatrix::OpenMapRealMatrix(jint a0, jint a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_3313c75e3e16c428, a0, a1)) {}

      OpenMapRealMatrix OpenMapRealMatrix::add(const OpenMapRealMatrix & a0) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_add_9ab78a1295afd3f2], a0.this$));
      }

      void OpenMapRealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_94fe8d9ffeb50676], a0, a1, a2);
      }

      OpenMapRealMatrix OpenMapRealMatrix::copy() const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_copy_fb3c06abb38b6709]));
      }

      OpenMapRealMatrix OpenMapRealMatrix::createMatrix(jint a0, jint a1) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_b6b8c117f363e6a5], a0, a1));
      }

      jint OpenMapRealMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_55546ef6a647f39b]);
      }

      jdouble OpenMapRealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_cad98089d00f8a5b], a0, a1);
      }

      jint OpenMapRealMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_55546ef6a647f39b]);
      }

      OpenMapRealMatrix OpenMapRealMatrix::multiply(const OpenMapRealMatrix & a0) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_9ab78a1295afd3f2], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix OpenMapRealMatrix::multiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_be124f4006dc9f69], a0.this$));
      }

      void OpenMapRealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_94fe8d9ffeb50676], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix OpenMapRealMatrix::multiplyTransposed(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_be124f4006dc9f69], a0.this$));
      }

      void OpenMapRealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_94fe8d9ffeb50676], a0, a1, a2);
      }

      OpenMapRealMatrix OpenMapRealMatrix::subtract(const OpenMapRealMatrix & a0) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_9ab78a1295afd3f2], a0.this$));
      }

      OpenMapRealMatrix OpenMapRealMatrix::subtract(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_c9ead5188e390bab], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix OpenMapRealMatrix::transposeMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_be124f4006dc9f69], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_OpenMapRealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenMapRealMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OpenMapRealMatrix_init_(t_OpenMapRealMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OpenMapRealMatrix_add(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_addToEntry(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_copy(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_createMatrix(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_getColumnDimension(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_getEntry(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_getRowDimension(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_multiply(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_multiplyEntry(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_multiplyTransposed(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_setEntry(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_subtract(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_transposeMultiply(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_get__columnDimension(t_OpenMapRealMatrix *self, void *data);
      static PyObject *t_OpenMapRealMatrix_get__rowDimension(t_OpenMapRealMatrix *self, void *data);
      static PyGetSetDef t_OpenMapRealMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_OpenMapRealMatrix, columnDimension),
        DECLARE_GET_FIELD(t_OpenMapRealMatrix, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OpenMapRealMatrix__methods_[] = {
        DECLARE_METHOD(t_OpenMapRealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenMapRealMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenMapRealMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, transposeMultiply, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenMapRealMatrix)[] = {
        { Py_tp_methods, t_OpenMapRealMatrix__methods_ },
        { Py_tp_init, (void *) t_OpenMapRealMatrix_init_ },
        { Py_tp_getset, t_OpenMapRealMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenMapRealMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractRealMatrix),
        NULL
      };

      DEFINE_TYPE(OpenMapRealMatrix, t_OpenMapRealMatrix, OpenMapRealMatrix);

      void t_OpenMapRealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenMapRealMatrix), &PY_TYPE_DEF(OpenMapRealMatrix), module, "OpenMapRealMatrix", 0);
      }

      void t_OpenMapRealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealMatrix), "class_", make_descriptor(OpenMapRealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealMatrix), "wrapfn_", make_descriptor(t_OpenMapRealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OpenMapRealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenMapRealMatrix::initializeClass, 1)))
          return NULL;
        return t_OpenMapRealMatrix::wrap_Object(OpenMapRealMatrix(((t_OpenMapRealMatrix *) arg)->object.this$));
      }
      static PyObject *t_OpenMapRealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenMapRealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OpenMapRealMatrix_init_(t_OpenMapRealMatrix *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jint a1;
        OpenMapRealMatrix object((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          INT_CALL(object = OpenMapRealMatrix(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OpenMapRealMatrix_add(t_OpenMapRealMatrix *self, PyObject *args)
      {
        OpenMapRealMatrix a0((jobject) NULL);
        OpenMapRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", OpenMapRealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_OpenMapRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_addToEntry(t_OpenMapRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_copy(t_OpenMapRealMatrix *self, PyObject *args)
      {
        OpenMapRealMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return t_OpenMapRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_createMatrix(t_OpenMapRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        OpenMapRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return t_OpenMapRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_getColumnDimension(t_OpenMapRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_getEntry(t_OpenMapRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_getRowDimension(t_OpenMapRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_multiply(t_OpenMapRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealMatrix a0((jobject) NULL);
            OpenMapRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", OpenMapRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_OpenMapRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_multiplyEntry(t_OpenMapRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_multiplyTransposed(t_OpenMapRealMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.multiplyTransposed(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_setEntry(t_OpenMapRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_subtract(t_OpenMapRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealMatrix a0((jobject) NULL);
            OpenMapRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", OpenMapRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_OpenMapRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            OpenMapRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_OpenMapRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_transposeMultiply(t_OpenMapRealMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.transposeMultiply(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_get__columnDimension(t_OpenMapRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_OpenMapRealMatrix_get__rowDimension(t_OpenMapRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/AdMethodType.h"
#include "org/orekit/files/ccsds/definitions/AdMethodType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *AdMethodType::class$ = NULL;
          jmethodID *AdMethodType::mids$ = NULL;
          bool AdMethodType::live$ = false;
          AdMethodType *AdMethodType::BATCH = NULL;
          AdMethodType *AdMethodType::EKF = NULL;
          AdMethodType *AdMethodType::FILTER_SMOOTHER = NULL;
          AdMethodType *AdMethodType::QUEST = NULL;
          AdMethodType *AdMethodType::Q_METHOD = NULL;
          AdMethodType *AdMethodType::TRIAD = NULL;

          jclass AdMethodType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/AdMethodType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_27aede9d65384f14] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/AdMethodType;");
              mids$[mid_values_d3779354ec89c716] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/AdMethodType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BATCH = new AdMethodType(env->getStaticObjectField(cls, "BATCH", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              EKF = new AdMethodType(env->getStaticObjectField(cls, "EKF", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              FILTER_SMOOTHER = new AdMethodType(env->getStaticObjectField(cls, "FILTER_SMOOTHER", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              QUEST = new AdMethodType(env->getStaticObjectField(cls, "QUEST", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              Q_METHOD = new AdMethodType(env->getStaticObjectField(cls, "Q_METHOD", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              TRIAD = new AdMethodType(env->getStaticObjectField(cls, "TRIAD", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AdMethodType AdMethodType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return AdMethodType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_27aede9d65384f14], a0.this$));
          }

          JArray< AdMethodType > AdMethodType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< AdMethodType >(env->callStaticObjectMethod(cls, mids$[mid_values_d3779354ec89c716]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          static PyObject *t_AdMethodType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AdMethodType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AdMethodType_of_(t_AdMethodType *self, PyObject *args);
          static PyObject *t_AdMethodType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_AdMethodType_values(PyTypeObject *type);
          static PyObject *t_AdMethodType_get__parameters_(t_AdMethodType *self, void *data);
          static PyGetSetDef t_AdMethodType__fields_[] = {
            DECLARE_GET_FIELD(t_AdMethodType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AdMethodType__methods_[] = {
            DECLARE_METHOD(t_AdMethodType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AdMethodType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AdMethodType, of_, METH_VARARGS),
            DECLARE_METHOD(t_AdMethodType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_AdMethodType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AdMethodType)[] = {
            { Py_tp_methods, t_AdMethodType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AdMethodType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AdMethodType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(AdMethodType, t_AdMethodType, AdMethodType);
          PyObject *t_AdMethodType::wrap_Object(const AdMethodType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AdMethodType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AdMethodType *self = (t_AdMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AdMethodType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AdMethodType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AdMethodType *self = (t_AdMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AdMethodType::install(PyObject *module)
          {
            installType(&PY_TYPE(AdMethodType), &PY_TYPE_DEF(AdMethodType), module, "AdMethodType", 0);
          }

          void t_AdMethodType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "class_", make_descriptor(AdMethodType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "wrapfn_", make_descriptor(t_AdMethodType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "boxfn_", make_descriptor(boxObject));
            env->getClass(AdMethodType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "BATCH", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::BATCH)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "EKF", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::EKF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "FILTER_SMOOTHER", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::FILTER_SMOOTHER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "QUEST", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::QUEST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "Q_METHOD", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::Q_METHOD)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "TRIAD", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::TRIAD)));
          }

          static PyObject *t_AdMethodType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AdMethodType::initializeClass, 1)))
              return NULL;
            return t_AdMethodType::wrap_Object(AdMethodType(((t_AdMethodType *) arg)->object.this$));
          }
          static PyObject *t_AdMethodType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AdMethodType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AdMethodType_of_(t_AdMethodType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AdMethodType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            AdMethodType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::AdMethodType::valueOf(a0));
              return t_AdMethodType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_AdMethodType_values(PyTypeObject *type)
          {
            JArray< AdMethodType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::AdMethodType::values());
            return JArray<jobject>(result.this$).wrap(t_AdMethodType::wrap_jobject);
          }
          static PyObject *t_AdMethodType_get__parameters_(t_AdMethodType *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/util/List.h"
#include "java/io/InputStream.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIOffsetsLoader$Parser::class$ = NULL;
      jmethodID *UTCTAIOffsetsLoader$Parser::mids$ = NULL;
      bool UTCTAIOffsetsLoader$Parser::live$ = false;

      jclass UTCTAIOffsetsLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIOffsetsLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_parse_7b8887374449b257] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List UTCTAIOffsetsLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_7b8887374449b257], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_UTCTAIOffsetsLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffsetsLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffsetsLoader$Parser_parse(t_UTCTAIOffsetsLoader$Parser *self, PyObject *args);

      static PyMethodDef t_UTCTAIOffsetsLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_UTCTAIOffsetsLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffsetsLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffsetsLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIOffsetsLoader$Parser)[] = {
        { Py_tp_methods, t_UTCTAIOffsetsLoader$Parser__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIOffsetsLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UTCTAIOffsetsLoader$Parser, t_UTCTAIOffsetsLoader$Parser, UTCTAIOffsetsLoader$Parser);

      void t_UTCTAIOffsetsLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIOffsetsLoader$Parser), &PY_TYPE_DEF(UTCTAIOffsetsLoader$Parser), module, "UTCTAIOffsetsLoader$Parser", 0);
      }

      void t_UTCTAIOffsetsLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader$Parser), "class_", make_descriptor(UTCTAIOffsetsLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader$Parser), "wrapfn_", make_descriptor(t_UTCTAIOffsetsLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIOffsetsLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIOffsetsLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_UTCTAIOffsetsLoader$Parser::wrap_Object(UTCTAIOffsetsLoader$Parser(((t_UTCTAIOffsetsLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIOffsetsLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIOffsetsLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UTCTAIOffsetsLoader$Parser_parse(t_UTCTAIOffsetsLoader$Parser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/EphemerisOcmWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/io/IOException.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/Appendable.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *EphemerisOcmWriter::class$ = NULL;
              jmethodID *EphemerisOcmWriter::mids$ = NULL;
              bool EphemerisOcmWriter::live$ = false;

              jclass EphemerisOcmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/EphemerisOcmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_327daf74e29d7521] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;Lorg/orekit/files/ccsds/utils/FileFormat;Ljava/lang/String;DI)V");
                  mids$[mid_write_b257e3ad1002b2a9] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              EphemerisOcmWriter::EphemerisOcmWriter(const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter & a0, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata & a2, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a3, const ::org::orekit::files::ccsds::utils::FileFormat & a4, const ::java::lang::String & a5, jdouble a6, jint a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_327daf74e29d7521, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6, a7)) {}

              void EphemerisOcmWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_write_b257e3ad1002b2a9], a0.this$, a1.this$);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_EphemerisOcmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_EphemerisOcmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_EphemerisOcmWriter_init_(t_EphemerisOcmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_EphemerisOcmWriter_write(t_EphemerisOcmWriter *self, PyObject *args);

              static PyMethodDef t_EphemerisOcmWriter__methods_[] = {
                DECLARE_METHOD(t_EphemerisOcmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EphemerisOcmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EphemerisOcmWriter, write, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(EphemerisOcmWriter)[] = {
                { Py_tp_methods, t_EphemerisOcmWriter__methods_ },
                { Py_tp_init, (void *) t_EphemerisOcmWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(EphemerisOcmWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(EphemerisOcmWriter, t_EphemerisOcmWriter, EphemerisOcmWriter);

              void t_EphemerisOcmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(EphemerisOcmWriter), &PY_TYPE_DEF(EphemerisOcmWriter), module, "EphemerisOcmWriter", 0);
              }

              void t_EphemerisOcmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOcmWriter), "class_", make_descriptor(EphemerisOcmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOcmWriter), "wrapfn_", make_descriptor(t_EphemerisOcmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOcmWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_EphemerisOcmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, EphemerisOcmWriter::initializeClass, 1)))
                  return NULL;
                return t_EphemerisOcmWriter::wrap_Object(EphemerisOcmWriter(((t_EphemerisOcmWriter *) arg)->object.this$));
              }
              static PyObject *t_EphemerisOcmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, EphemerisOcmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_EphemerisOcmWriter_init_(t_EphemerisOcmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a3((jobject) NULL);
                ::org::orekit::files::ccsds::utils::FileFormat a4((jobject) NULL);
                PyTypeObject **p4;
                ::java::lang::String a5((jobject) NULL);
                jdouble a6;
                jint a7;
                EphemerisOcmWriter object((jobject) NULL);

                if (!parseArgs(args, "KkkkKsDI", ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmWriter::parameters_, &a1, &a2, &a3, &a4, &p4, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_, &a5, &a6, &a7))
                {
                  INT_CALL(object = EphemerisOcmWriter(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_EphemerisOcmWriter_write(t_EphemerisOcmWriter *self, PyObject *args)
              {
                ::java::lang::Appendable a0((jobject) NULL);
                ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
                {
                  OBJ_CALL(self->object.write(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "write", args);
                return NULL;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType.h"
#include "org/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *PolygonalFieldOfView$DefiningConeType::class$ = NULL;
        jmethodID *PolygonalFieldOfView$DefiningConeType::mids$ = NULL;
        bool PolygonalFieldOfView$DefiningConeType::live$ = false;
        PolygonalFieldOfView$DefiningConeType *PolygonalFieldOfView$DefiningConeType::INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE = NULL;
        PolygonalFieldOfView$DefiningConeType *PolygonalFieldOfView$DefiningConeType::OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES = NULL;

        jclass PolygonalFieldOfView$DefiningConeType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_78840a7c7e7b49d6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;");
            mids$[mid_values_15396b451273789c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;");
            mids$[mid_verticesRadius_2eeda88661ae34d3] = env->getMethodID(cls, "verticesRadius", "(DI)D");
            mids$[mid_createVertex_de1303e2166a33f5] = env->getMethodID(cls, "createVertex", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DI)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE = new PolygonalFieldOfView$DefiningConeType(env->getStaticObjectField(cls, "INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE", "Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;"));
            OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES = new PolygonalFieldOfView$DefiningConeType(env->getStaticObjectField(cls, "OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES", "Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolygonalFieldOfView$DefiningConeType PolygonalFieldOfView$DefiningConeType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return PolygonalFieldOfView$DefiningConeType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_78840a7c7e7b49d6], a0.this$));
        }

        JArray< PolygonalFieldOfView$DefiningConeType > PolygonalFieldOfView$DefiningConeType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< PolygonalFieldOfView$DefiningConeType >(env->callStaticObjectMethod(cls, mids$[mid_values_15396b451273789c]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_of_(t_PolygonalFieldOfView$DefiningConeType *self, PyObject *args);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_values(PyTypeObject *type);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_get__parameters_(t_PolygonalFieldOfView$DefiningConeType *self, void *data);
        static PyGetSetDef t_PolygonalFieldOfView$DefiningConeType__fields_[] = {
          DECLARE_GET_FIELD(t_PolygonalFieldOfView$DefiningConeType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolygonalFieldOfView$DefiningConeType__methods_[] = {
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, of_, METH_VARARGS),
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolygonalFieldOfView$DefiningConeType)[] = {
          { Py_tp_methods, t_PolygonalFieldOfView$DefiningConeType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_PolygonalFieldOfView$DefiningConeType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolygonalFieldOfView$DefiningConeType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(PolygonalFieldOfView$DefiningConeType, t_PolygonalFieldOfView$DefiningConeType, PolygonalFieldOfView$DefiningConeType);
        PyObject *t_PolygonalFieldOfView$DefiningConeType::wrap_Object(const PolygonalFieldOfView$DefiningConeType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PolygonalFieldOfView$DefiningConeType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PolygonalFieldOfView$DefiningConeType *self = (t_PolygonalFieldOfView$DefiningConeType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PolygonalFieldOfView$DefiningConeType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PolygonalFieldOfView$DefiningConeType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PolygonalFieldOfView$DefiningConeType *self = (t_PolygonalFieldOfView$DefiningConeType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PolygonalFieldOfView$DefiningConeType::install(PyObject *module)
        {
          installType(&PY_TYPE(PolygonalFieldOfView$DefiningConeType), &PY_TYPE_DEF(PolygonalFieldOfView$DefiningConeType), module, "PolygonalFieldOfView$DefiningConeType", 0);
        }

        void t_PolygonalFieldOfView$DefiningConeType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "class_", make_descriptor(PolygonalFieldOfView$DefiningConeType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "wrapfn_", make_descriptor(t_PolygonalFieldOfView$DefiningConeType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "boxfn_", make_descriptor(boxObject));
          env->getClass(PolygonalFieldOfView$DefiningConeType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE", make_descriptor(t_PolygonalFieldOfView$DefiningConeType::wrap_Object(*PolygonalFieldOfView$DefiningConeType::INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES", make_descriptor(t_PolygonalFieldOfView$DefiningConeType::wrap_Object(*PolygonalFieldOfView$DefiningConeType::OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES)));
        }

        static PyObject *t_PolygonalFieldOfView$DefiningConeType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolygonalFieldOfView$DefiningConeType::initializeClass, 1)))
            return NULL;
          return t_PolygonalFieldOfView$DefiningConeType::wrap_Object(PolygonalFieldOfView$DefiningConeType(((t_PolygonalFieldOfView$DefiningConeType *) arg)->object.this$));
        }
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolygonalFieldOfView$DefiningConeType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PolygonalFieldOfView$DefiningConeType_of_(t_PolygonalFieldOfView$DefiningConeType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_PolygonalFieldOfView$DefiningConeType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          PolygonalFieldOfView$DefiningConeType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType::valueOf(a0));
            return t_PolygonalFieldOfView$DefiningConeType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_PolygonalFieldOfView$DefiningConeType_values(PyTypeObject *type)
        {
          JArray< PolygonalFieldOfView$DefiningConeType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType::values());
          return JArray<jobject>(result.this$).wrap(t_PolygonalFieldOfView$DefiningConeType::wrap_jobject);
        }
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_get__parameters_(t_PolygonalFieldOfView$DefiningConeType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/BodyCenterPointing.h"
#include "org/orekit/bodies/Ellipsoid.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *BodyCenterPointing::class$ = NULL;
      jmethodID *BodyCenterPointing::mids$ = NULL;
      bool BodyCenterPointing::live$ = false;

      jclass BodyCenterPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/BodyCenterPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8bf3e19b17f5b364] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/bodies/Ellipsoid;)V");
          mids$[mid_getTargetPV_4a6b199bd28f952f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getTargetPV_0c9a6603286e7c6f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BodyCenterPointing::BodyCenterPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::bodies::Ellipsoid & a1) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_8bf3e19b17f5b364, a0.this$, a1.this$)) {}

      ::org::orekit::utils::TimeStampedFieldPVCoordinates BodyCenterPointing::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_4a6b199bd28f952f], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates BodyCenterPointing::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_0c9a6603286e7c6f], a0.this$, a1.this$, a2.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_BodyCenterPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BodyCenterPointing_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BodyCenterPointing_init_(t_BodyCenterPointing *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BodyCenterPointing_getTargetPV(t_BodyCenterPointing *self, PyObject *args);

      static PyMethodDef t_BodyCenterPointing__methods_[] = {
        DECLARE_METHOD(t_BodyCenterPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodyCenterPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodyCenterPointing, getTargetPV, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BodyCenterPointing)[] = {
        { Py_tp_methods, t_BodyCenterPointing__methods_ },
        { Py_tp_init, (void *) t_BodyCenterPointing_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BodyCenterPointing)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(BodyCenterPointing, t_BodyCenterPointing, BodyCenterPointing);

      void t_BodyCenterPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(BodyCenterPointing), &PY_TYPE_DEF(BodyCenterPointing), module, "BodyCenterPointing", 0);
      }

      void t_BodyCenterPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyCenterPointing), "class_", make_descriptor(BodyCenterPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyCenterPointing), "wrapfn_", make_descriptor(t_BodyCenterPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyCenterPointing), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BodyCenterPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BodyCenterPointing::initializeClass, 1)))
          return NULL;
        return t_BodyCenterPointing::wrap_Object(BodyCenterPointing(((t_BodyCenterPointing *) arg)->object.this$));
      }
      static PyObject *t_BodyCenterPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BodyCenterPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BodyCenterPointing_init_(t_BodyCenterPointing *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::bodies::Ellipsoid a1((jobject) NULL);
        BodyCenterPointing object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::bodies::Ellipsoid::initializeClass, &a0, &a1))
        {
          INT_CALL(object = BodyCenterPointing(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BodyCenterPointing_getTargetPV(t_BodyCenterPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/units/Unit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *ParsedUnitsBehavior::class$ = NULL;
          jmethodID *ParsedUnitsBehavior::mids$ = NULL;
          bool ParsedUnitsBehavior::live$ = false;
          ParsedUnitsBehavior *ParsedUnitsBehavior::CONVERT_COMPATIBLE = NULL;
          ParsedUnitsBehavior *ParsedUnitsBehavior::IGNORE_PARSED = NULL;
          ParsedUnitsBehavior *ParsedUnitsBehavior::STRICT_COMPLIANCE = NULL;

          jclass ParsedUnitsBehavior::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/ParsedUnitsBehavior");

              mids$ = new jmethodID[max_mid];
              mids$[mid_select_950d7f19836d06e5] = env->getMethodID(cls, "select", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/utils/units/Unit;)Lorg/orekit/utils/units/Unit;");
              mids$[mid_valueOf_58cfe10c82037514] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");
              mids$[mid_values_9998cd0e4f55bdc4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CONVERT_COMPATIBLE = new ParsedUnitsBehavior(env->getStaticObjectField(cls, "CONVERT_COMPATIBLE", "Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;"));
              IGNORE_PARSED = new ParsedUnitsBehavior(env->getStaticObjectField(cls, "IGNORE_PARSED", "Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;"));
              STRICT_COMPLIANCE = new ParsedUnitsBehavior(env->getStaticObjectField(cls, "STRICT_COMPLIANCE", "Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::utils::units::Unit ParsedUnitsBehavior::select(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::utils::units::Unit & a1) const
          {
            return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_select_950d7f19836d06e5], a0.this$, a1.this$));
          }

          ParsedUnitsBehavior ParsedUnitsBehavior::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ParsedUnitsBehavior(env->callStaticObjectMethod(cls, mids$[mid_valueOf_58cfe10c82037514], a0.this$));
          }

          JArray< ParsedUnitsBehavior > ParsedUnitsBehavior::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< ParsedUnitsBehavior >(env->callStaticObjectMethod(cls, mids$[mid_values_9998cd0e4f55bdc4]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          static PyObject *t_ParsedUnitsBehavior_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParsedUnitsBehavior_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParsedUnitsBehavior_of_(t_ParsedUnitsBehavior *self, PyObject *args);
          static PyObject *t_ParsedUnitsBehavior_select(t_ParsedUnitsBehavior *self, PyObject *args);
          static PyObject *t_ParsedUnitsBehavior_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_ParsedUnitsBehavior_values(PyTypeObject *type);
          static PyObject *t_ParsedUnitsBehavior_get__parameters_(t_ParsedUnitsBehavior *self, void *data);
          static PyGetSetDef t_ParsedUnitsBehavior__fields_[] = {
            DECLARE_GET_FIELD(t_ParsedUnitsBehavior, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ParsedUnitsBehavior__methods_[] = {
            DECLARE_METHOD(t_ParsedUnitsBehavior, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParsedUnitsBehavior, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParsedUnitsBehavior, of_, METH_VARARGS),
            DECLARE_METHOD(t_ParsedUnitsBehavior, select, METH_VARARGS),
            DECLARE_METHOD(t_ParsedUnitsBehavior, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_ParsedUnitsBehavior, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ParsedUnitsBehavior)[] = {
            { Py_tp_methods, t_ParsedUnitsBehavior__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ParsedUnitsBehavior__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ParsedUnitsBehavior)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(ParsedUnitsBehavior, t_ParsedUnitsBehavior, ParsedUnitsBehavior);
          PyObject *t_ParsedUnitsBehavior::wrap_Object(const ParsedUnitsBehavior& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ParsedUnitsBehavior::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ParsedUnitsBehavior *self = (t_ParsedUnitsBehavior *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ParsedUnitsBehavior::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ParsedUnitsBehavior::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ParsedUnitsBehavior *self = (t_ParsedUnitsBehavior *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ParsedUnitsBehavior::install(PyObject *module)
          {
            installType(&PY_TYPE(ParsedUnitsBehavior), &PY_TYPE_DEF(ParsedUnitsBehavior), module, "ParsedUnitsBehavior", 0);
          }

          void t_ParsedUnitsBehavior::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "class_", make_descriptor(ParsedUnitsBehavior::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "wrapfn_", make_descriptor(t_ParsedUnitsBehavior::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "boxfn_", make_descriptor(boxObject));
            env->getClass(ParsedUnitsBehavior::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "CONVERT_COMPATIBLE", make_descriptor(t_ParsedUnitsBehavior::wrap_Object(*ParsedUnitsBehavior::CONVERT_COMPATIBLE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "IGNORE_PARSED", make_descriptor(t_ParsedUnitsBehavior::wrap_Object(*ParsedUnitsBehavior::IGNORE_PARSED)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "STRICT_COMPLIANCE", make_descriptor(t_ParsedUnitsBehavior::wrap_Object(*ParsedUnitsBehavior::STRICT_COMPLIANCE)));
          }

          static PyObject *t_ParsedUnitsBehavior_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ParsedUnitsBehavior::initializeClass, 1)))
              return NULL;
            return t_ParsedUnitsBehavior::wrap_Object(ParsedUnitsBehavior(((t_ParsedUnitsBehavior *) arg)->object.this$));
          }
          static PyObject *t_ParsedUnitsBehavior_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ParsedUnitsBehavior::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ParsedUnitsBehavior_of_(t_ParsedUnitsBehavior *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_ParsedUnitsBehavior_select(t_ParsedUnitsBehavior *self, PyObject *args)
          {
            ::org::orekit::utils::units::Unit a0((jobject) NULL);
            ::org::orekit::utils::units::Unit a1((jobject) NULL);
            ::org::orekit::utils::units::Unit result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.select(a0, a1));
              return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "select", args);
            return NULL;
          }

          static PyObject *t_ParsedUnitsBehavior_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ParsedUnitsBehavior result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::valueOf(a0));
              return t_ParsedUnitsBehavior::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_ParsedUnitsBehavior_values(PyTypeObject *type)
          {
            JArray< ParsedUnitsBehavior > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::values());
            return JArray<jobject>(result.this$).wrap(t_ParsedUnitsBehavior::wrap_jobject);
          }
          static PyObject *t_ParsedUnitsBehavior_get__parameters_(t_ParsedUnitsBehavior *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/api/InertialFrameId.h"
#include "java/lang/String.h"
#include "org/orekit/rugged/api/InertialFrameId.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *InertialFrameId::class$ = NULL;
        jmethodID *InertialFrameId::mids$ = NULL;
        bool InertialFrameId::live$ = false;
        InertialFrameId *InertialFrameId::EME2000 = NULL;
        InertialFrameId *InertialFrameId::GCRF = NULL;
        InertialFrameId *InertialFrameId::MOD = NULL;
        InertialFrameId *InertialFrameId::TOD = NULL;
        InertialFrameId *InertialFrameId::VEIS1950 = NULL;

        jclass InertialFrameId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/InertialFrameId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_6b9cec60444c160a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/api/InertialFrameId;");
            mids$[mid_values_1ac67992fbac2c1e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/api/InertialFrameId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            EME2000 = new InertialFrameId(env->getStaticObjectField(cls, "EME2000", "Lorg/orekit/rugged/api/InertialFrameId;"));
            GCRF = new InertialFrameId(env->getStaticObjectField(cls, "GCRF", "Lorg/orekit/rugged/api/InertialFrameId;"));
            MOD = new InertialFrameId(env->getStaticObjectField(cls, "MOD", "Lorg/orekit/rugged/api/InertialFrameId;"));
            TOD = new InertialFrameId(env->getStaticObjectField(cls, "TOD", "Lorg/orekit/rugged/api/InertialFrameId;"));
            VEIS1950 = new InertialFrameId(env->getStaticObjectField(cls, "VEIS1950", "Lorg/orekit/rugged/api/InertialFrameId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InertialFrameId InertialFrameId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return InertialFrameId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6b9cec60444c160a], a0.this$));
        }

        JArray< InertialFrameId > InertialFrameId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< InertialFrameId >(env->callStaticObjectMethod(cls, mids$[mid_values_1ac67992fbac2c1e]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {
        static PyObject *t_InertialFrameId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InertialFrameId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InertialFrameId_of_(t_InertialFrameId *self, PyObject *args);
        static PyObject *t_InertialFrameId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_InertialFrameId_values(PyTypeObject *type);
        static PyObject *t_InertialFrameId_get__parameters_(t_InertialFrameId *self, void *data);
        static PyGetSetDef t_InertialFrameId__fields_[] = {
          DECLARE_GET_FIELD(t_InertialFrameId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InertialFrameId__methods_[] = {
          DECLARE_METHOD(t_InertialFrameId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InertialFrameId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InertialFrameId, of_, METH_VARARGS),
          DECLARE_METHOD(t_InertialFrameId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InertialFrameId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InertialFrameId)[] = {
          { Py_tp_methods, t_InertialFrameId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_InertialFrameId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InertialFrameId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(InertialFrameId, t_InertialFrameId, InertialFrameId);
        PyObject *t_InertialFrameId::wrap_Object(const InertialFrameId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InertialFrameId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InertialFrameId *self = (t_InertialFrameId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_InertialFrameId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InertialFrameId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InertialFrameId *self = (t_InertialFrameId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_InertialFrameId::install(PyObject *module)
        {
          installType(&PY_TYPE(InertialFrameId), &PY_TYPE_DEF(InertialFrameId), module, "InertialFrameId", 0);
        }

        void t_InertialFrameId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "class_", make_descriptor(InertialFrameId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "wrapfn_", make_descriptor(t_InertialFrameId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "boxfn_", make_descriptor(boxObject));
          env->getClass(InertialFrameId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "EME2000", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::EME2000)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "GCRF", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::GCRF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "MOD", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::MOD)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "TOD", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::TOD)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "VEIS1950", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::VEIS1950)));
        }

        static PyObject *t_InertialFrameId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InertialFrameId::initializeClass, 1)))
            return NULL;
          return t_InertialFrameId::wrap_Object(InertialFrameId(((t_InertialFrameId *) arg)->object.this$));
        }
        static PyObject *t_InertialFrameId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InertialFrameId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_InertialFrameId_of_(t_InertialFrameId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_InertialFrameId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          InertialFrameId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::api::InertialFrameId::valueOf(a0));
            return t_InertialFrameId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_InertialFrameId_values(PyTypeObject *type)
        {
          JArray< InertialFrameId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::api::InertialFrameId::values());
          return JArray<jobject>(result.this$).wrap(t_InertialFrameId::wrap_jobject);
        }
        static PyObject *t_InertialFrameId_get__parameters_(t_InertialFrameId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/EquationsMapper.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/SecondaryODE.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ExpandableODE::class$ = NULL;
      jmethodID *ExpandableODE::mids$ = NULL;
      bool ExpandableODE::live$ = false;

      jclass ExpandableODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ExpandableODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e32ec3fc45ceb153] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/OrdinaryDifferentialEquation;)V");
          mids$[mid_addSecondaryEquations_12812867dc221799] = env->getMethodID(cls, "addSecondaryEquations", "(Lorg/hipparchus/ode/SecondaryODE;)I");
          mids$[mid_computeDerivatives_91fbb4072ae7ce9a] = env->getMethodID(cls, "computeDerivatives", "(D[D)[D");
          mids$[mid_getMapper_d05a9ec8030c7103] = env->getMethodID(cls, "getMapper", "()Lorg/hipparchus/ode/EquationsMapper;");
          mids$[mid_getPrimary_c6cec2ce02740365] = env->getMethodID(cls, "getPrimary", "()Lorg/hipparchus/ode/OrdinaryDifferentialEquation;");
          mids$[mid_init_9ab16ee510aba086] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEState;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ExpandableODE::ExpandableODE(const ::org::hipparchus::ode::OrdinaryDifferentialEquation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e32ec3fc45ceb153, a0.this$)) {}

      jint ExpandableODE::addSecondaryEquations(const ::org::hipparchus::ode::SecondaryODE & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_addSecondaryEquations_12812867dc221799], a0.this$);
      }

      JArray< jdouble > ExpandableODE::computeDerivatives(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_91fbb4072ae7ce9a], a0, a1.this$));
      }

      ::org::hipparchus::ode::EquationsMapper ExpandableODE::getMapper() const
      {
        return ::org::hipparchus::ode::EquationsMapper(env->callObjectMethod(this$, mids$[mid_getMapper_d05a9ec8030c7103]));
      }

      ::org::hipparchus::ode::OrdinaryDifferentialEquation ExpandableODE::getPrimary() const
      {
        return ::org::hipparchus::ode::OrdinaryDifferentialEquation(env->callObjectMethod(this$, mids$[mid_getPrimary_c6cec2ce02740365]));
      }

      void ExpandableODE::init(const ::org::hipparchus::ode::ODEState & a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_9ab16ee510aba086], a0.this$, a1);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      static PyObject *t_ExpandableODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ExpandableODE_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ExpandableODE_init_(t_ExpandableODE *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ExpandableODE_addSecondaryEquations(t_ExpandableODE *self, PyObject *arg);
      static PyObject *t_ExpandableODE_computeDerivatives(t_ExpandableODE *self, PyObject *args);
      static PyObject *t_ExpandableODE_getMapper(t_ExpandableODE *self);
      static PyObject *t_ExpandableODE_getPrimary(t_ExpandableODE *self);
      static PyObject *t_ExpandableODE_init(t_ExpandableODE *self, PyObject *args);
      static PyObject *t_ExpandableODE_get__mapper(t_ExpandableODE *self, void *data);
      static PyObject *t_ExpandableODE_get__primary(t_ExpandableODE *self, void *data);
      static PyGetSetDef t_ExpandableODE__fields_[] = {
        DECLARE_GET_FIELD(t_ExpandableODE, mapper),
        DECLARE_GET_FIELD(t_ExpandableODE, primary),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ExpandableODE__methods_[] = {
        DECLARE_METHOD(t_ExpandableODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExpandableODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExpandableODE, addSecondaryEquations, METH_O),
        DECLARE_METHOD(t_ExpandableODE, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_ExpandableODE, getMapper, METH_NOARGS),
        DECLARE_METHOD(t_ExpandableODE, getPrimary, METH_NOARGS),
        DECLARE_METHOD(t_ExpandableODE, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ExpandableODE)[] = {
        { Py_tp_methods, t_ExpandableODE__methods_ },
        { Py_tp_init, (void *) t_ExpandableODE_init_ },
        { Py_tp_getset, t_ExpandableODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ExpandableODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ExpandableODE, t_ExpandableODE, ExpandableODE);

      void t_ExpandableODE::install(PyObject *module)
      {
        installType(&PY_TYPE(ExpandableODE), &PY_TYPE_DEF(ExpandableODE), module, "ExpandableODE", 0);
      }

      void t_ExpandableODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExpandableODE), "class_", make_descriptor(ExpandableODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExpandableODE), "wrapfn_", make_descriptor(t_ExpandableODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExpandableODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ExpandableODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ExpandableODE::initializeClass, 1)))
          return NULL;
        return t_ExpandableODE::wrap_Object(ExpandableODE(((t_ExpandableODE *) arg)->object.this$));
      }
      static PyObject *t_ExpandableODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ExpandableODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ExpandableODE_init_(t_ExpandableODE *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::ode::OrdinaryDifferentialEquation a0((jobject) NULL);
        ExpandableODE object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::ode::OrdinaryDifferentialEquation::initializeClass, &a0))
        {
          INT_CALL(object = ExpandableODE(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ExpandableODE_addSecondaryEquations(t_ExpandableODE *self, PyObject *arg)
      {
        ::org::hipparchus::ode::SecondaryODE a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", ::org::hipparchus::ode::SecondaryODE::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.addSecondaryEquations(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "addSecondaryEquations", arg);
        return NULL;
      }

      static PyObject *t_ExpandableODE_computeDerivatives(t_ExpandableODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_ExpandableODE_getMapper(t_ExpandableODE *self)
      {
        ::org::hipparchus::ode::EquationsMapper result((jobject) NULL);
        OBJ_CALL(result = self->object.getMapper());
        return ::org::hipparchus::ode::t_EquationsMapper::wrap_Object(result);
      }

      static PyObject *t_ExpandableODE_getPrimary(t_ExpandableODE *self)
      {
        ::org::hipparchus::ode::OrdinaryDifferentialEquation result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimary());
        return ::org::hipparchus::ode::t_OrdinaryDifferentialEquation::wrap_Object(result);
      }

      static PyObject *t_ExpandableODE_init(t_ExpandableODE *self, PyObject *args)
      {
        ::org::hipparchus::ode::ODEState a0((jobject) NULL);
        jdouble a1;

        if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.init(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_ExpandableODE_get__mapper(t_ExpandableODE *self, void *data)
      {
        ::org::hipparchus::ode::EquationsMapper value((jobject) NULL);
        OBJ_CALL(value = self->object.getMapper());
        return ::org::hipparchus::ode::t_EquationsMapper::wrap_Object(value);
      }

      static PyObject *t_ExpandableODE_get__primary(t_ExpandableODE *self, void *data)
      {
        ::org::hipparchus::ode::OrdinaryDifferentialEquation value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimary());
        return ::org::hipparchus::ode::t_OrdinaryDifferentialEquation::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *IERSConventions$NutationCorrectionConverter::class$ = NULL;
      jmethodID *IERSConventions$NutationCorrectionConverter::mids$ = NULL;
      bool IERSConventions$NutationCorrectionConverter::live$ = false;

      jclass IERSConventions$NutationCorrectionConverter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/IERSConventions$NutationCorrectionConverter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toEquinox_eefe8d37d3bcd210] = env->getMethodID(cls, "toEquinox", "(Lorg/orekit/time/AbsoluteDate;DD)[D");
          mids$[mid_toNonRotating_eefe8d37d3bcd210] = env->getMethodID(cls, "toNonRotating", "(Lorg/orekit/time/AbsoluteDate;DD)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > IERSConventions$NutationCorrectionConverter::toEquinox(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toEquinox_eefe8d37d3bcd210], a0.this$, a1, a2));
      }

      JArray< jdouble > IERSConventions$NutationCorrectionConverter::toNonRotating(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toNonRotating_eefe8d37d3bcd210], a0.this$, a1, a2));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_IERSConventions$NutationCorrectionConverter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_of_(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_toEquinox(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_toNonRotating(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_get__parameters_(t_IERSConventions$NutationCorrectionConverter *self, void *data);
      static PyGetSetDef t_IERSConventions$NutationCorrectionConverter__fields_[] = {
        DECLARE_GET_FIELD(t_IERSConventions$NutationCorrectionConverter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IERSConventions$NutationCorrectionConverter__methods_[] = {
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, of_, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, toEquinox, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, toNonRotating, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IERSConventions$NutationCorrectionConverter)[] = {
        { Py_tp_methods, t_IERSConventions$NutationCorrectionConverter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_IERSConventions$NutationCorrectionConverter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IERSConventions$NutationCorrectionConverter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IERSConventions$NutationCorrectionConverter, t_IERSConventions$NutationCorrectionConverter, IERSConventions$NutationCorrectionConverter);
      PyObject *t_IERSConventions$NutationCorrectionConverter::wrap_Object(const IERSConventions$NutationCorrectionConverter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_IERSConventions$NutationCorrectionConverter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_IERSConventions$NutationCorrectionConverter *self = (t_IERSConventions$NutationCorrectionConverter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_IERSConventions$NutationCorrectionConverter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_IERSConventions$NutationCorrectionConverter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_IERSConventions$NutationCorrectionConverter *self = (t_IERSConventions$NutationCorrectionConverter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_IERSConventions$NutationCorrectionConverter::install(PyObject *module)
      {
        installType(&PY_TYPE(IERSConventions$NutationCorrectionConverter), &PY_TYPE_DEF(IERSConventions$NutationCorrectionConverter), module, "IERSConventions$NutationCorrectionConverter", 0);
      }

      void t_IERSConventions$NutationCorrectionConverter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions$NutationCorrectionConverter), "class_", make_descriptor(IERSConventions$NutationCorrectionConverter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions$NutationCorrectionConverter), "wrapfn_", make_descriptor(t_IERSConventions$NutationCorrectionConverter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions$NutationCorrectionConverter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IERSConventions$NutationCorrectionConverter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IERSConventions$NutationCorrectionConverter::initializeClass, 1)))
          return NULL;
        return t_IERSConventions$NutationCorrectionConverter::wrap_Object(IERSConventions$NutationCorrectionConverter(((t_IERSConventions$NutationCorrectionConverter *) arg)->object.this$));
      }
      static PyObject *t_IERSConventions$NutationCorrectionConverter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IERSConventions$NutationCorrectionConverter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IERSConventions$NutationCorrectionConverter_of_(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_IERSConventions$NutationCorrectionConverter_toEquinox(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "kDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.toEquinox(a0, a1, a2));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "toEquinox", args);
        return NULL;
      }

      static PyObject *t_IERSConventions$NutationCorrectionConverter_toNonRotating(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "kDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.toNonRotating(a0, a1, a2));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "toNonRotating", args);
        return NULL;
      }
      static PyObject *t_IERSConventions$NutationCorrectionConverter_get__parameters_(t_IERSConventions$NutationCorrectionConverter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/Maneuvrable.h"
#include "org/orekit/files/ccsds/ndm/cdm/Maneuvrable.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *Maneuvrable::class$ = NULL;
            jmethodID *Maneuvrable::mids$ = NULL;
            bool Maneuvrable::live$ = false;
            Maneuvrable *Maneuvrable::NO = NULL;
            Maneuvrable *Maneuvrable::N_A = NULL;
            Maneuvrable *Maneuvrable::YES = NULL;

            jclass Maneuvrable::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/Maneuvrable");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getEnum_c48bbcf271102c5c] = env->getStaticMethodID(cls, "getEnum", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;");
                mids$[mid_getValue_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getValue", "()Ljava/lang/String;");
                mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                mids$[mid_valueOf_c48bbcf271102c5c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;");
                mids$[mid_values_2ccb0c302483ecc6] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                NO = new Maneuvrable(env->getStaticObjectField(cls, "NO", "Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;"));
                N_A = new Maneuvrable(env->getStaticObjectField(cls, "N_A", "Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;"));
                YES = new Maneuvrable(env->getStaticObjectField(cls, "YES", "Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            Maneuvrable Maneuvrable::getEnum(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return Maneuvrable(env->callStaticObjectMethod(cls, mids$[mid_getEnum_c48bbcf271102c5c], a0.this$));
            }

            ::java::lang::String Maneuvrable::getValue() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getValue_1c1fa1e935d6cdcf]));
            }

            ::java::lang::String Maneuvrable::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
            }

            Maneuvrable Maneuvrable::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return Maneuvrable(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c48bbcf271102c5c], a0.this$));
            }

            JArray< Maneuvrable > Maneuvrable::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< Maneuvrable >(env->callStaticObjectMethod(cls, mids$[mid_values_2ccb0c302483ecc6]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            static PyObject *t_Maneuvrable_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Maneuvrable_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Maneuvrable_of_(t_Maneuvrable *self, PyObject *args);
            static PyObject *t_Maneuvrable_getEnum(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Maneuvrable_getValue(t_Maneuvrable *self);
            static PyObject *t_Maneuvrable_toString(t_Maneuvrable *self, PyObject *args);
            static PyObject *t_Maneuvrable_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_Maneuvrable_values(PyTypeObject *type);
            static PyObject *t_Maneuvrable_get__value(t_Maneuvrable *self, void *data);
            static PyObject *t_Maneuvrable_get__parameters_(t_Maneuvrable *self, void *data);
            static PyGetSetDef t_Maneuvrable__fields_[] = {
              DECLARE_GET_FIELD(t_Maneuvrable, value),
              DECLARE_GET_FIELD(t_Maneuvrable, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Maneuvrable__methods_[] = {
              DECLARE_METHOD(t_Maneuvrable, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Maneuvrable, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Maneuvrable, of_, METH_VARARGS),
              DECLARE_METHOD(t_Maneuvrable, getEnum, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Maneuvrable, getValue, METH_NOARGS),
              DECLARE_METHOD(t_Maneuvrable, toString, METH_VARARGS),
              DECLARE_METHOD(t_Maneuvrable, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_Maneuvrable, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Maneuvrable)[] = {
              { Py_tp_methods, t_Maneuvrable__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_Maneuvrable__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Maneuvrable)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(Maneuvrable, t_Maneuvrable, Maneuvrable);
            PyObject *t_Maneuvrable::wrap_Object(const Maneuvrable& object, PyTypeObject *p0)
            {
              PyObject *obj = t_Maneuvrable::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Maneuvrable *self = (t_Maneuvrable *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_Maneuvrable::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_Maneuvrable::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Maneuvrable *self = (t_Maneuvrable *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_Maneuvrable::install(PyObject *module)
            {
              installType(&PY_TYPE(Maneuvrable), &PY_TYPE_DEF(Maneuvrable), module, "Maneuvrable", 0);
            }

            void t_Maneuvrable::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "class_", make_descriptor(Maneuvrable::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "wrapfn_", make_descriptor(t_Maneuvrable::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "boxfn_", make_descriptor(boxObject));
              env->getClass(Maneuvrable::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "NO", make_descriptor(t_Maneuvrable::wrap_Object(*Maneuvrable::NO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "N_A", make_descriptor(t_Maneuvrable::wrap_Object(*Maneuvrable::N_A)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "YES", make_descriptor(t_Maneuvrable::wrap_Object(*Maneuvrable::YES)));
            }

            static PyObject *t_Maneuvrable_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Maneuvrable::initializeClass, 1)))
                return NULL;
              return t_Maneuvrable::wrap_Object(Maneuvrable(((t_Maneuvrable *) arg)->object.this$));
            }
            static PyObject *t_Maneuvrable_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Maneuvrable::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Maneuvrable_of_(t_Maneuvrable *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_Maneuvrable_getEnum(PyTypeObject *type, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);
              Maneuvrable result((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::getEnum(a0));
                return t_Maneuvrable::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "getEnum", arg);
              return NULL;
            }

            static PyObject *t_Maneuvrable_getValue(t_Maneuvrable *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getValue());
              return j2p(result);
            }

            static PyObject *t_Maneuvrable_toString(t_Maneuvrable *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }

              return callSuper(PY_TYPE(Maneuvrable), (PyObject *) self, "toString", args, 2);
            }

            static PyObject *t_Maneuvrable_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              Maneuvrable result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::valueOf(a0));
                return t_Maneuvrable::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_Maneuvrable_values(PyTypeObject *type)
            {
              JArray< Maneuvrable > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::values());
              return JArray<jobject>(result.this$).wrap(t_Maneuvrable::wrap_jobject);
            }
            static PyObject *t_Maneuvrable_get__parameters_(t_Maneuvrable *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_Maneuvrable_get__value(t_Maneuvrable *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getValue());
              return j2p(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/LutherIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *LutherIntegrator::class$ = NULL;
        jmethodID *LutherIntegrator::mids$ = NULL;
        bool LutherIntegrator::live$ = false;

        jclass LutherIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/LutherIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_3b7b373db8e7887f] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_25e1757a36c4dde2] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_25e1757a36c4dde2] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_3d23c7f099cad63c] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/LutherStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LutherIntegrator::LutherIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        JArray< JArray< jdouble > > LutherIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_3b7b373db8e7887f]));
        }

        JArray< jdouble > LutherIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_25e1757a36c4dde2]));
        }

        JArray< jdouble > LutherIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_25e1757a36c4dde2]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        static PyObject *t_LutherIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LutherIntegrator_init_(t_LutherIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LutherIntegrator_getA(t_LutherIntegrator *self, PyObject *args);
        static PyObject *t_LutherIntegrator_getB(t_LutherIntegrator *self, PyObject *args);
        static PyObject *t_LutherIntegrator_getC(t_LutherIntegrator *self, PyObject *args);
        static PyObject *t_LutherIntegrator_get__a(t_LutherIntegrator *self, void *data);
        static PyObject *t_LutherIntegrator_get__b(t_LutherIntegrator *self, void *data);
        static PyObject *t_LutherIntegrator_get__c(t_LutherIntegrator *self, void *data);
        static PyGetSetDef t_LutherIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_LutherIntegrator, a),
          DECLARE_GET_FIELD(t_LutherIntegrator, b),
          DECLARE_GET_FIELD(t_LutherIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LutherIntegrator__methods_[] = {
          DECLARE_METHOD(t_LutherIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_LutherIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_LutherIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LutherIntegrator)[] = {
          { Py_tp_methods, t_LutherIntegrator__methods_ },
          { Py_tp_init, (void *) t_LutherIntegrator_init_ },
          { Py_tp_getset, t_LutherIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LutherIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(LutherIntegrator, t_LutherIntegrator, LutherIntegrator);

        void t_LutherIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(LutherIntegrator), &PY_TYPE_DEF(LutherIntegrator), module, "LutherIntegrator", 0);
        }

        void t_LutherIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegrator), "class_", make_descriptor(LutherIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegrator), "wrapfn_", make_descriptor(t_LutherIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LutherIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LutherIntegrator::initializeClass, 1)))
            return NULL;
          return t_LutherIntegrator::wrap_Object(LutherIntegrator(((t_LutherIntegrator *) arg)->object.this$));
        }
        static PyObject *t_LutherIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LutherIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LutherIntegrator_init_(t_LutherIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          LutherIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = LutherIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LutherIntegrator_getA(t_LutherIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(LutherIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_LutherIntegrator_getB(t_LutherIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(LutherIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_LutherIntegrator_getC(t_LutherIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(LutherIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_LutherIntegrator_get__a(t_LutherIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_LutherIntegrator_get__b(t_LutherIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_LutherIntegrator_get__c(t_LutherIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/measurements/SensorMapping.h"
#include "java/util/Map$Entry.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {

          ::java::lang::Class *SensorMapping::class$ = NULL;
          jmethodID *SensorMapping::mids$ = NULL;
          bool SensorMapping::live$ = false;

          jclass SensorMapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/measurements/SensorMapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_a627ad9c5959309d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_addMapping_cbab5cd1ea853e18] = env->getMethodID(cls, "addMapping", "(Lorg/orekit/rugged/linesensor/SensorPixel;Ljava/lang/Object;)V");
              mids$[mid_getMapping_7e8f11dd23d1142c] = env->getMethodID(cls, "getMapping", "()Ljava/util/Set;");
              mids$[mid_getRuggedName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getRuggedName", "()Ljava/lang/String;");
              mids$[mid_getSensorName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSensorName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SensorMapping::SensorMapping(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

          SensorMapping::SensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a627ad9c5959309d, a0.this$, a1.this$)) {}

          void SensorMapping::addMapping(const ::org::orekit::rugged::linesensor::SensorPixel & a0, const ::java::lang::Object & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addMapping_cbab5cd1ea853e18], a0.this$, a1.this$);
          }

          ::java::util::Set SensorMapping::getMapping() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getMapping_7e8f11dd23d1142c]));
          }

          ::java::lang::String SensorMapping::getRuggedName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRuggedName_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String SensorMapping::getSensorName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorName_1c1fa1e935d6cdcf]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {
          static PyObject *t_SensorMapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SensorMapping_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SensorMapping_of_(t_SensorMapping *self, PyObject *args);
          static int t_SensorMapping_init_(t_SensorMapping *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SensorMapping_addMapping(t_SensorMapping *self, PyObject *args);
          static PyObject *t_SensorMapping_getMapping(t_SensorMapping *self);
          static PyObject *t_SensorMapping_getRuggedName(t_SensorMapping *self);
          static PyObject *t_SensorMapping_getSensorName(t_SensorMapping *self);
          static PyObject *t_SensorMapping_get__mapping(t_SensorMapping *self, void *data);
          static PyObject *t_SensorMapping_get__ruggedName(t_SensorMapping *self, void *data);
          static PyObject *t_SensorMapping_get__sensorName(t_SensorMapping *self, void *data);
          static PyObject *t_SensorMapping_get__parameters_(t_SensorMapping *self, void *data);
          static PyGetSetDef t_SensorMapping__fields_[] = {
            DECLARE_GET_FIELD(t_SensorMapping, mapping),
            DECLARE_GET_FIELD(t_SensorMapping, ruggedName),
            DECLARE_GET_FIELD(t_SensorMapping, sensorName),
            DECLARE_GET_FIELD(t_SensorMapping, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SensorMapping__methods_[] = {
            DECLARE_METHOD(t_SensorMapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorMapping, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorMapping, of_, METH_VARARGS),
            DECLARE_METHOD(t_SensorMapping, addMapping, METH_VARARGS),
            DECLARE_METHOD(t_SensorMapping, getMapping, METH_NOARGS),
            DECLARE_METHOD(t_SensorMapping, getRuggedName, METH_NOARGS),
            DECLARE_METHOD(t_SensorMapping, getSensorName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SensorMapping)[] = {
            { Py_tp_methods, t_SensorMapping__methods_ },
            { Py_tp_init, (void *) t_SensorMapping_init_ },
            { Py_tp_getset, t_SensorMapping__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SensorMapping)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SensorMapping, t_SensorMapping, SensorMapping);
          PyObject *t_SensorMapping::wrap_Object(const SensorMapping& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SensorMapping::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SensorMapping *self = (t_SensorMapping *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SensorMapping::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SensorMapping::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SensorMapping *self = (t_SensorMapping *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SensorMapping::install(PyObject *module)
          {
            installType(&PY_TYPE(SensorMapping), &PY_TYPE_DEF(SensorMapping), module, "SensorMapping", 0);
          }

          void t_SensorMapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMapping), "class_", make_descriptor(SensorMapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMapping), "wrapfn_", make_descriptor(t_SensorMapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SensorMapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SensorMapping::initializeClass, 1)))
              return NULL;
            return t_SensorMapping::wrap_Object(SensorMapping(((t_SensorMapping *) arg)->object.this$));
          }
          static PyObject *t_SensorMapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SensorMapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SensorMapping_of_(t_SensorMapping *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SensorMapping_init_(t_SensorMapping *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                SensorMapping object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = SensorMapping(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                SensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = SensorMapping(a0, a1));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SensorMapping_addMapping(t_SensorMapping *self, PyObject *args)
          {
            ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);
            ::java::lang::Object a1((jobject) NULL);

            if (!parseArgs(args, "kO", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, self->parameters[0], &a0, &a1))
            {
              OBJ_CALL(self->object.addMapping(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addMapping", args);
            return NULL;
          }

          static PyObject *t_SensorMapping_getMapping(t_SensorMapping *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(result);
          }

          static PyObject *t_SensorMapping_getRuggedName(t_SensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRuggedName());
            return j2p(result);
          }

          static PyObject *t_SensorMapping_getSensorName(t_SensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSensorName());
            return j2p(result);
          }
          static PyObject *t_SensorMapping_get__parameters_(t_SensorMapping *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_SensorMapping_get__mapping(t_SensorMapping *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(value);
          }

          static PyObject *t_SensorMapping_get__ruggedName(t_SensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRuggedName());
            return j2p(value);
          }

          static PyObject *t_SensorMapping_get__sensorName(t_SensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSensorName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EopHistoryLoader$Parser.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/io/InputStream.h"
#include "java/util/Collection.h"
#include "org/orekit/frames/EOPEntry.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "java/io/IOException.h"
#include "org/orekit/frames/EopHistoryLoader$Parser.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScales.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EopHistoryLoader$Parser::class$ = NULL;
      jmethodID *EopHistoryLoader$Parser::mids$ = NULL;
      bool EopHistoryLoader$Parser::live$ = false;

      jclass EopHistoryLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EopHistoryLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_newBulletinBParser_d23614a351b30e27] = env->getStaticMethodID(cls, "newBulletinBParser", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScales;)Lorg/orekit/frames/EopHistoryLoader$Parser;");
          mids$[mid_newEopC04Parser_d23614a351b30e27] = env->getStaticMethodID(cls, "newEopC04Parser", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScales;)Lorg/orekit/frames/EopHistoryLoader$Parser;");
          mids$[mid_newFinalsColumnsParser_1003aba2539b8602] = env->getStaticMethodID(cls, "newFinalsColumnsParser", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScales;Z)Lorg/orekit/frames/EopHistoryLoader$Parser;");
          mids$[mid_newFinalsXmlParser_d23614a351b30e27] = env->getStaticMethodID(cls, "newFinalsXmlParser", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScales;)Lorg/orekit/frames/EopHistoryLoader$Parser;");
          mids$[mid_parse_45e6e751205dacc3] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/Collection;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EopHistoryLoader$Parser EopHistoryLoader$Parser::newBulletinBParser(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScales & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return EopHistoryLoader$Parser(env->callStaticObjectMethod(cls, mids$[mid_newBulletinBParser_d23614a351b30e27], a0.this$, a1.this$, a2.this$));
      }

      EopHistoryLoader$Parser EopHistoryLoader$Parser::newEopC04Parser(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScales & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return EopHistoryLoader$Parser(env->callStaticObjectMethod(cls, mids$[mid_newEopC04Parser_d23614a351b30e27], a0.this$, a1.this$, a2.this$));
      }

      EopHistoryLoader$Parser EopHistoryLoader$Parser::newFinalsColumnsParser(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScales & a2, jboolean a3)
      {
        jclass cls = env->getClass(initializeClass);
        return EopHistoryLoader$Parser(env->callStaticObjectMethod(cls, mids$[mid_newFinalsColumnsParser_1003aba2539b8602], a0.this$, a1.this$, a2.this$, a3));
      }

      EopHistoryLoader$Parser EopHistoryLoader$Parser::newFinalsXmlParser(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScales & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return EopHistoryLoader$Parser(env->callStaticObjectMethod(cls, mids$[mid_newFinalsXmlParser_d23614a351b30e27], a0.this$, a1.this$, a2.this$));
      }

      ::java::util::Collection EopHistoryLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_parse_45e6e751205dacc3], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_EopHistoryLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EopHistoryLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EopHistoryLoader$Parser_newBulletinBParser(PyTypeObject *type, PyObject *args);
      static PyObject *t_EopHistoryLoader$Parser_newEopC04Parser(PyTypeObject *type, PyObject *args);
      static PyObject *t_EopHistoryLoader$Parser_newFinalsColumnsParser(PyTypeObject *type, PyObject *args);
      static PyObject *t_EopHistoryLoader$Parser_newFinalsXmlParser(PyTypeObject *type, PyObject *args);
      static PyObject *t_EopHistoryLoader$Parser_parse(t_EopHistoryLoader$Parser *self, PyObject *args);

      static PyMethodDef t_EopHistoryLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_EopHistoryLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, newBulletinBParser, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, newEopC04Parser, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, newFinalsColumnsParser, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, newFinalsXmlParser, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EopHistoryLoader$Parser)[] = {
        { Py_tp_methods, t_EopHistoryLoader$Parser__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EopHistoryLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EopHistoryLoader$Parser, t_EopHistoryLoader$Parser, EopHistoryLoader$Parser);

      void t_EopHistoryLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(EopHistoryLoader$Parser), &PY_TYPE_DEF(EopHistoryLoader$Parser), module, "EopHistoryLoader$Parser", 0);
      }

      void t_EopHistoryLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader$Parser), "class_", make_descriptor(EopHistoryLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader$Parser), "wrapfn_", make_descriptor(t_EopHistoryLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EopHistoryLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EopHistoryLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_EopHistoryLoader$Parser::wrap_Object(EopHistoryLoader$Parser(((t_EopHistoryLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_EopHistoryLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EopHistoryLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EopHistoryLoader$Parser_newBulletinBParser(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::ItrfVersionProvider a1((jobject) NULL);
        ::org::orekit::time::TimeScales a2((jobject) NULL);
        EopHistoryLoader$Parser result((jobject) NULL);

        if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::ItrfVersionProvider::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::frames::EopHistoryLoader$Parser::newBulletinBParser(a0, a1, a2));
          return t_EopHistoryLoader$Parser::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "newBulletinBParser", args);
        return NULL;
      }

      static PyObject *t_EopHistoryLoader$Parser_newEopC04Parser(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::ItrfVersionProvider a1((jobject) NULL);
        ::org::orekit::time::TimeScales a2((jobject) NULL);
        EopHistoryLoader$Parser result((jobject) NULL);

        if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::ItrfVersionProvider::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::frames::EopHistoryLoader$Parser::newEopC04Parser(a0, a1, a2));
          return t_EopHistoryLoader$Parser::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "newEopC04Parser", args);
        return NULL;
      }

      static PyObject *t_EopHistoryLoader$Parser_newFinalsColumnsParser(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::ItrfVersionProvider a1((jobject) NULL);
        ::org::orekit::time::TimeScales a2((jobject) NULL);
        jboolean a3;
        EopHistoryLoader$Parser result((jobject) NULL);

        if (!parseArgs(args, "KkkZ", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::ItrfVersionProvider::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3))
        {
          OBJ_CALL(result = ::org::orekit::frames::EopHistoryLoader$Parser::newFinalsColumnsParser(a0, a1, a2, a3));
          return t_EopHistoryLoader$Parser::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "newFinalsColumnsParser", args);
        return NULL;
      }

      static PyObject *t_EopHistoryLoader$Parser_newFinalsXmlParser(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::ItrfVersionProvider a1((jobject) NULL);
        ::org::orekit::time::TimeScales a2((jobject) NULL);
        EopHistoryLoader$Parser result((jobject) NULL);

        if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::ItrfVersionProvider::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::frames::EopHistoryLoader$Parser::newFinalsXmlParser(a0, a1, a2));
          return t_EopHistoryLoader$Parser::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "newFinalsXmlParser", args);
        return NULL;
      }

      static PyObject *t_EopHistoryLoader$Parser_parse(t_EopHistoryLoader$Parser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::Collection result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::frames::PY_TYPE(EOPEntry));
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/oned/IntervalsSet.h"
#include "java/util/Iterator.h"
#include "java/lang/Iterable.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/oned/Interval.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/oned/IntervalsSet.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *IntervalsSet::class$ = NULL;
          jmethodID *IntervalsSet::mids$ = NULL;
          bool IntervalsSet::live$ = false;

          jclass IntervalsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/IntervalsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_936ab5386aba1bbf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_16deaf08470737f9] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_asList_e62d3bb06d56d7e3] = env->getMethodID(cls, "asList", "()Ljava/util/List;");
              mids$[mid_buildNew_3d4e98e70bfea87e] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/euclidean/oned/IntervalsSet;");
              mids$[mid_getInf_b74f83833fdad017] = env->getMethodID(cls, "getInf", "()D");
              mids$[mid_getSup_b74f83833fdad017] = env->getMethodID(cls, "getSup", "()D");
              mids$[mid_iterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
              mids$[mid_projectToBoundary_dcacfc1bc354b9c2] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/BoundaryProjection;");
              mids$[mid_computeGeometricalProperties_a1fa5dae97ea5ed2] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntervalsSet::IntervalsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

          IntervalsSet::IntervalsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_936ab5386aba1bbf, a0.this$, a1)) {}

          IntervalsSet::IntervalsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_16deaf08470737f9, a0.this$, a1)) {}

          IntervalsSet::IntervalsSet(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

          ::java::util::List IntervalsSet::asList() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_asList_e62d3bb06d56d7e3]));
          }

          IntervalsSet IntervalsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return IntervalsSet(env->callObjectMethod(this$, mids$[mid_buildNew_3d4e98e70bfea87e], a0.this$));
          }

          jdouble IntervalsSet::getInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInf_b74f83833fdad017]);
          }

          jdouble IntervalsSet::getSup() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSup_b74f83833fdad017]);
          }

          ::java::util::Iterator IntervalsSet::iterator() const
          {
            return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_fc7780bc5d5b73b0]));
          }

          ::org::hipparchus::geometry::partitioning::BoundaryProjection IntervalsSet::projectToBoundary(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::BoundaryProjection(env->callObjectMethod(this$, mids$[mid_projectToBoundary_dcacfc1bc354b9c2], a0.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {
          static PyObject *t_IntervalsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntervalsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntervalsSet_of_(t_IntervalsSet *self, PyObject *args);
          static int t_IntervalsSet_init_(t_IntervalsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IntervalsSet_asList(t_IntervalsSet *self);
          static PyObject *t_IntervalsSet_buildNew(t_IntervalsSet *self, PyObject *args);
          static PyObject *t_IntervalsSet_getInf(t_IntervalsSet *self);
          static PyObject *t_IntervalsSet_getSup(t_IntervalsSet *self);
          static PyObject *t_IntervalsSet_iterator(t_IntervalsSet *self);
          static PyObject *t_IntervalsSet_projectToBoundary(t_IntervalsSet *self, PyObject *args);
          static PyObject *t_IntervalsSet_get__inf(t_IntervalsSet *self, void *data);
          static PyObject *t_IntervalsSet_get__sup(t_IntervalsSet *self, void *data);
          static PyObject *t_IntervalsSet_get__parameters_(t_IntervalsSet *self, void *data);
          static PyGetSetDef t_IntervalsSet__fields_[] = {
            DECLARE_GET_FIELD(t_IntervalsSet, inf),
            DECLARE_GET_FIELD(t_IntervalsSet, sup),
            DECLARE_GET_FIELD(t_IntervalsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IntervalsSet__methods_[] = {
            DECLARE_METHOD(t_IntervalsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntervalsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntervalsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_IntervalsSet, asList, METH_NOARGS),
            DECLARE_METHOD(t_IntervalsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_IntervalsSet, getInf, METH_NOARGS),
            DECLARE_METHOD(t_IntervalsSet, getSup, METH_NOARGS),
            DECLARE_METHOD(t_IntervalsSet, iterator, METH_NOARGS),
            DECLARE_METHOD(t_IntervalsSet, projectToBoundary, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntervalsSet)[] = {
            { Py_tp_methods, t_IntervalsSet__methods_ },
            { Py_tp_init, (void *) t_IntervalsSet_init_ },
            { Py_tp_getset, t_IntervalsSet__fields_ },
            { Py_tp_iter, (void *) ((PyObject *(*)(t_IntervalsSet *)) get_generic_iterator< t_IntervalsSet >) },
            { Py_tp_iternext, (void *) 0 },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntervalsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(IntervalsSet, t_IntervalsSet, IntervalsSet);
          PyObject *t_IntervalsSet::wrap_Object(const IntervalsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_IntervalsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IntervalsSet *self = (t_IntervalsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_IntervalsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_IntervalsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IntervalsSet *self = (t_IntervalsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_IntervalsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(IntervalsSet), &PY_TYPE_DEF(IntervalsSet), module, "IntervalsSet", 0);
          }

          void t_IntervalsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalsSet), "class_", make_descriptor(IntervalsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalsSet), "wrapfn_", make_descriptor(t_IntervalsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntervalsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntervalsSet::initializeClass, 1)))
              return NULL;
            return t_IntervalsSet::wrap_Object(IntervalsSet(((t_IntervalsSet *) arg)->object.this$));
          }
          static PyObject *t_IntervalsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntervalsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IntervalsSet_of_(t_IntervalsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_IntervalsSet_init_(t_IntervalsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                IntervalsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = IntervalsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                IntervalsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = IntervalsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                IntervalsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = IntervalsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                IntervalsSet object((jobject) NULL);

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  INT_CALL(object = IntervalsSet(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IntervalsSet_asList(t_IntervalsSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.asList());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Interval));
          }

          static PyObject *t_IntervalsSet_buildNew(t_IntervalsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            IntervalsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_IntervalsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(IntervalsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_IntervalsSet_getInf(t_IntervalsSet *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IntervalsSet_getSup(t_IntervalsSet *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSup());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IntervalsSet_iterator(t_IntervalsSet *self)
          {
            ::java::util::Iterator result((jobject) NULL);
            OBJ_CALL(result = self->object.iterator());
            return ::java::util::t_Iterator::wrap_Object(result, ::java::lang::PY_TYPE(Object));
          }

          static PyObject *t_IntervalsSet_projectToBoundary(t_IntervalsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::BoundaryProjection result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.projectToBoundary(a0));
              return ::org::hipparchus::geometry::partitioning::t_BoundaryProjection::wrap_Object(result, ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D));
            }

            return callSuper(PY_TYPE(IntervalsSet), (PyObject *) self, "projectToBoundary", args, 2);
          }
          static PyObject *t_IntervalsSet_get__parameters_(t_IntervalsSet *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_IntervalsSet_get__inf(t_IntervalsSet *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_IntervalsSet_get__sup(t_IntervalsSet *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSup());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/SingleLayerModelMappingFunction.h"
#include "org/orekit/models/earth/ionosphere/IonosphericMappingFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *SingleLayerModelMappingFunction::class$ = NULL;
          jmethodID *SingleLayerModelMappingFunction::mids$ = NULL;
          bool SingleLayerModelMappingFunction::live$ = false;

          jclass SingleLayerModelMappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/SingleLayerModelMappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_mappingFactor_04fd0666b613d2ab] = env->getMethodID(cls, "mappingFactor", "(D)D");
              mids$[mid_mappingFactor_6e00dc5eb352fe51] = env->getMethodID(cls, "mappingFactor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SingleLayerModelMappingFunction::SingleLayerModelMappingFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          SingleLayerModelMappingFunction::SingleLayerModelMappingFunction(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

          jdouble SingleLayerModelMappingFunction::mappingFactor(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_mappingFactor_04fd0666b613d2ab], a0);
          }

          ::org::hipparchus::CalculusFieldElement SingleLayerModelMappingFunction::mappingFactor(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_mappingFactor_6e00dc5eb352fe51], a0.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {
          static PyObject *t_SingleLayerModelMappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SingleLayerModelMappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SingleLayerModelMappingFunction_init_(t_SingleLayerModelMappingFunction *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SingleLayerModelMappingFunction_mappingFactor(t_SingleLayerModelMappingFunction *self, PyObject *args);

          static PyMethodDef t_SingleLayerModelMappingFunction__methods_[] = {
            DECLARE_METHOD(t_SingleLayerModelMappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleLayerModelMappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleLayerModelMappingFunction, mappingFactor, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SingleLayerModelMappingFunction)[] = {
            { Py_tp_methods, t_SingleLayerModelMappingFunction__methods_ },
            { Py_tp_init, (void *) t_SingleLayerModelMappingFunction_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SingleLayerModelMappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SingleLayerModelMappingFunction, t_SingleLayerModelMappingFunction, SingleLayerModelMappingFunction);

          void t_SingleLayerModelMappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(SingleLayerModelMappingFunction), &PY_TYPE_DEF(SingleLayerModelMappingFunction), module, "SingleLayerModelMappingFunction", 0);
          }

          void t_SingleLayerModelMappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleLayerModelMappingFunction), "class_", make_descriptor(SingleLayerModelMappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleLayerModelMappingFunction), "wrapfn_", make_descriptor(t_SingleLayerModelMappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleLayerModelMappingFunction), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SingleLayerModelMappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SingleLayerModelMappingFunction::initializeClass, 1)))
              return NULL;
            return t_SingleLayerModelMappingFunction::wrap_Object(SingleLayerModelMappingFunction(((t_SingleLayerModelMappingFunction *) arg)->object.this$));
          }
          static PyObject *t_SingleLayerModelMappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SingleLayerModelMappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SingleLayerModelMappingFunction_init_(t_SingleLayerModelMappingFunction *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                SingleLayerModelMappingFunction object((jobject) NULL);

                INT_CALL(object = SingleLayerModelMappingFunction());
                self->object = object;
                break;
              }
             case 1:
              {
                jdouble a0;
                SingleLayerModelMappingFunction object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = SingleLayerModelMappingFunction(a0));
                  self->object = object;
                  break;
                }
              }
             default:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SingleLayerModelMappingFunction_mappingFactor(t_SingleLayerModelMappingFunction *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.mappingFactor(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactor(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactor", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Inverse.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Inverse::class$ = NULL;
        jmethodID *Inverse::mids$ = NULL;
        bool Inverse::live$ = false;

        jclass Inverse::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Inverse");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Inverse::Inverse() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Inverse::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Inverse::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Inverse_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Inverse_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Inverse_init_(t_Inverse *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Inverse_value(t_Inverse *self, PyObject *args);

        static PyMethodDef t_Inverse__methods_[] = {
          DECLARE_METHOD(t_Inverse, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Inverse, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Inverse, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Inverse)[] = {
          { Py_tp_methods, t_Inverse__methods_ },
          { Py_tp_init, (void *) t_Inverse_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Inverse)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Inverse, t_Inverse, Inverse);

        void t_Inverse::install(PyObject *module)
        {
          installType(&PY_TYPE(Inverse), &PY_TYPE_DEF(Inverse), module, "Inverse", 0);
        }

        void t_Inverse::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Inverse), "class_", make_descriptor(Inverse::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Inverse), "wrapfn_", make_descriptor(t_Inverse::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Inverse), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Inverse_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Inverse::initializeClass, 1)))
            return NULL;
          return t_Inverse::wrap_Object(Inverse(((t_Inverse *) arg)->object.this$));
        }
        static PyObject *t_Inverse_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Inverse::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Inverse_init_(t_Inverse *self, PyObject *args, PyObject *kwds)
        {
          Inverse object((jobject) NULL);

          INT_CALL(object = Inverse());
          self->object = object;

          return 0;
        }

        static PyObject *t_Inverse_value(t_Inverse *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/ODEStepEndHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEState.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *ODEStepEndHandler::class$ = NULL;
        jmethodID *ODEStepEndHandler::mids$ = NULL;
        bool ODEStepEndHandler::live$ = false;

        jclass ODEStepEndHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/ODEStepEndHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init_a7556bd72cab73f1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_resetState_4c251f698673080b] = env->getMethodID(cls, "resetState", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/ODEState;");
            mids$[mid_stepEndOccurred_74bc8c9c74854c3a] = env->getMethodID(cls, "stepEndOccurred", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Z)Lorg/hipparchus/ode/events/Action;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ODEStepEndHandler::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_a7556bd72cab73f1], a0.this$, a1);
        }

        ::org::hipparchus::ode::ODEState ODEStepEndHandler::resetState(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_resetState_4c251f698673080b], a0.this$));
        }

        ::org::hipparchus::ode::events::Action ODEStepEndHandler::stepEndOccurred(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jboolean a1) const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_stepEndOccurred_74bc8c9c74854c3a], a0.this$, a1));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        static PyObject *t_ODEStepEndHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStepEndHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStepEndHandler_init(t_ODEStepEndHandler *self, PyObject *args);
        static PyObject *t_ODEStepEndHandler_resetState(t_ODEStepEndHandler *self, PyObject *arg);
        static PyObject *t_ODEStepEndHandler_stepEndOccurred(t_ODEStepEndHandler *self, PyObject *args);

        static PyMethodDef t_ODEStepEndHandler__methods_[] = {
          DECLARE_METHOD(t_ODEStepEndHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStepEndHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStepEndHandler, init, METH_VARARGS),
          DECLARE_METHOD(t_ODEStepEndHandler, resetState, METH_O),
          DECLARE_METHOD(t_ODEStepEndHandler, stepEndOccurred, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEStepEndHandler)[] = {
          { Py_tp_methods, t_ODEStepEndHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEStepEndHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEStepEndHandler, t_ODEStepEndHandler, ODEStepEndHandler);

        void t_ODEStepEndHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEStepEndHandler), &PY_TYPE_DEF(ODEStepEndHandler), module, "ODEStepEndHandler", 0);
        }

        void t_ODEStepEndHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepEndHandler), "class_", make_descriptor(ODEStepEndHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepEndHandler), "wrapfn_", make_descriptor(t_ODEStepEndHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepEndHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEStepEndHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEStepEndHandler::initializeClass, 1)))
            return NULL;
          return t_ODEStepEndHandler::wrap_Object(ODEStepEndHandler(((t_ODEStepEndHandler *) arg)->object.this$));
        }
        static PyObject *t_ODEStepEndHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEStepEndHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEStepEndHandler_init(t_ODEStepEndHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_ODEStepEndHandler_resetState(t_ODEStepEndHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::ODEState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.resetState(a0));
            return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "resetState", arg);
          return NULL;
        }

        static PyObject *t_ODEStepEndHandler_stepEndOccurred(t_ODEStepEndHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jboolean a1;
          ::org::hipparchus::ode::events::Action result((jobject) NULL);

          if (!parseArgs(args, "kZ", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.stepEndOccurred(a0, a1));
            return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "stepEndOccurred", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialFunction::class$ = NULL;
        jmethodID *PolynomialFunction::mids$ = NULL;
        bool PolynomialFunction::live$ = false;

        jclass PolynomialFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab69da052b88f50c] = env->getMethodID(cls, "<init>", "([D)V");
            mids$[mid_add_54f3e3329edce1eb] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_antiDerivative_c3e7249fd6a78747] = env->getMethodID(cls, "antiDerivative", "()Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_degree_55546ef6a647f39b] = env->getMethodID(cls, "degree", "()I");
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getCoefficients_25e1757a36c4dde2] = env->getMethodID(cls, "getCoefficients", "()[D");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_integrate_99e3200dafc19573] = env->getMethodID(cls, "integrate", "(DD)D");
            mids$[mid_multiply_54f3e3329edce1eb] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_negate_c3e7249fd6a78747] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_polynomialDerivative_c3e7249fd6a78747] = env->getMethodID(cls, "polynomialDerivative", "()Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_subtract_54f3e3329edce1eb] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_6e00dc5eb352fe51] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_evaluate_79e4db9e1e3d84c9] = env->getStaticMethodID(cls, "evaluate", "([DD)D");
            mids$[mid_differentiate_14dee4cb8cc3e959] = env->getStaticMethodID(cls, "differentiate", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialFunction::PolynomialFunction(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab69da052b88f50c, a0.this$)) {}

        PolynomialFunction PolynomialFunction::add(const PolynomialFunction & a0) const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_add_54f3e3329edce1eb], a0.this$));
        }

        PolynomialFunction PolynomialFunction::antiDerivative() const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_antiDerivative_c3e7249fd6a78747]));
        }

        jint PolynomialFunction::degree() const
        {
          return env->callIntMethod(this$, mids$[mid_degree_55546ef6a647f39b]);
        }

        jboolean PolynomialFunction::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        JArray< jdouble > PolynomialFunction::getCoefficients() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCoefficients_25e1757a36c4dde2]));
        }

        jint PolynomialFunction::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
        }

        jdouble PolynomialFunction::integrate(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_integrate_99e3200dafc19573], a0, a1);
        }

        PolynomialFunction PolynomialFunction::multiply(const PolynomialFunction & a0) const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_multiply_54f3e3329edce1eb], a0.this$));
        }

        PolynomialFunction PolynomialFunction::negate() const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_negate_c3e7249fd6a78747]));
        }

        PolynomialFunction PolynomialFunction::polynomialDerivative() const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_polynomialDerivative_c3e7249fd6a78747]));
        }

        PolynomialFunction PolynomialFunction::subtract(const PolynomialFunction & a0) const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_subtract_54f3e3329edce1eb], a0.this$));
        }

        ::java::lang::String PolynomialFunction::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
        }

        jdouble PolynomialFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::CalculusFieldElement PolynomialFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_6e00dc5eb352fe51], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::Derivative PolynomialFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        static PyObject *t_PolynomialFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialFunction_init_(t_PolynomialFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialFunction_add(t_PolynomialFunction *self, PyObject *arg);
        static PyObject *t_PolynomialFunction_antiDerivative(t_PolynomialFunction *self);
        static PyObject *t_PolynomialFunction_degree(t_PolynomialFunction *self);
        static PyObject *t_PolynomialFunction_equals(t_PolynomialFunction *self, PyObject *args);
        static PyObject *t_PolynomialFunction_getCoefficients(t_PolynomialFunction *self);
        static PyObject *t_PolynomialFunction_hashCode(t_PolynomialFunction *self, PyObject *args);
        static PyObject *t_PolynomialFunction_integrate(t_PolynomialFunction *self, PyObject *args);
        static PyObject *t_PolynomialFunction_multiply(t_PolynomialFunction *self, PyObject *arg);
        static PyObject *t_PolynomialFunction_negate(t_PolynomialFunction *self);
        static PyObject *t_PolynomialFunction_polynomialDerivative(t_PolynomialFunction *self);
        static PyObject *t_PolynomialFunction_subtract(t_PolynomialFunction *self, PyObject *arg);
        static PyObject *t_PolynomialFunction_toString(t_PolynomialFunction *self, PyObject *args);
        static PyObject *t_PolynomialFunction_value(t_PolynomialFunction *self, PyObject *args);
        static PyObject *t_PolynomialFunction_get__coefficients(t_PolynomialFunction *self, void *data);
        static PyGetSetDef t_PolynomialFunction__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialFunction, coefficients),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialFunction__methods_[] = {
          DECLARE_METHOD(t_PolynomialFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunction, add, METH_O),
          DECLARE_METHOD(t_PolynomialFunction, antiDerivative, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunction, degree, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunction, equals, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialFunction, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunction, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialFunction, integrate, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialFunction, multiply, METH_O),
          DECLARE_METHOD(t_PolynomialFunction, negate, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunction, polynomialDerivative, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunction, subtract, METH_O),
          DECLARE_METHOD(t_PolynomialFunction, toString, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialFunction)[] = {
          { Py_tp_methods, t_PolynomialFunction__methods_ },
          { Py_tp_init, (void *) t_PolynomialFunction_init_ },
          { Py_tp_getset, t_PolynomialFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialFunction, t_PolynomialFunction, PolynomialFunction);

        void t_PolynomialFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialFunction), &PY_TYPE_DEF(PolynomialFunction), module, "PolynomialFunction", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction), "Parametric", make_descriptor(&PY_TYPE_DEF(PolynomialFunction$Parametric)));
        }

        void t_PolynomialFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction), "class_", make_descriptor(PolynomialFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction), "wrapfn_", make_descriptor(t_PolynomialFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialFunction::initializeClass, 1)))
            return NULL;
          return t_PolynomialFunction::wrap_Object(PolynomialFunction(((t_PolynomialFunction *) arg)->object.this$));
        }
        static PyObject *t_PolynomialFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialFunction_init_(t_PolynomialFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          PolynomialFunction object((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            INT_CALL(object = PolynomialFunction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PolynomialFunction_add(t_PolynomialFunction *self, PyObject *arg)
        {
          PolynomialFunction a0((jobject) NULL);
          PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "k", PolynomialFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.add(a0));
            return t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "add", arg);
          return NULL;
        }

        static PyObject *t_PolynomialFunction_antiDerivative(t_PolynomialFunction *self)
        {
          PolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.antiDerivative());
          return t_PolynomialFunction::wrap_Object(result);
        }

        static PyObject *t_PolynomialFunction_degree(t_PolynomialFunction *self)
        {
          jint result;
          OBJ_CALL(result = self->object.degree());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PolynomialFunction_equals(t_PolynomialFunction *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(PolynomialFunction), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_PolynomialFunction_getCoefficients(t_PolynomialFunction *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunction_hashCode(t_PolynomialFunction *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PolynomialFunction), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_PolynomialFunction_integrate(t_PolynomialFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_PolynomialFunction_multiply(t_PolynomialFunction *self, PyObject *arg)
        {
          PolynomialFunction a0((jobject) NULL);
          PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "k", PolynomialFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.multiply(a0));
            return t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", arg);
          return NULL;
        }

        static PyObject *t_PolynomialFunction_negate(t_PolynomialFunction *self)
        {
          PolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_PolynomialFunction::wrap_Object(result);
        }

        static PyObject *t_PolynomialFunction_polynomialDerivative(t_PolynomialFunction *self)
        {
          PolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.polynomialDerivative());
          return t_PolynomialFunction::wrap_Object(result);
        }

        static PyObject *t_PolynomialFunction_subtract(t_PolynomialFunction *self, PyObject *arg)
        {
          PolynomialFunction a0((jobject) NULL);
          PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "k", PolynomialFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.subtract(a0));
            return t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", arg);
          return NULL;
        }

        static PyObject *t_PolynomialFunction_toString(t_PolynomialFunction *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(PolynomialFunction), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_PolynomialFunction_value(t_PolynomialFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_PolynomialFunction_get__coefficients(t_PolynomialFunction *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/OsculatingToMeanElementsConverter.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *OsculatingToMeanElementsConverter::class$ = NULL;
        jmethodID *OsculatingToMeanElementsConverter::mids$ = NULL;
        bool OsculatingToMeanElementsConverter::live$ = false;

        jclass OsculatingToMeanElementsConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/OsculatingToMeanElementsConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_09213e1af131873d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;ILorg/orekit/propagation/Propagator;D)V");
            mids$[mid_convert_9d155cc8314c99cf] = env->getMethodID(cls, "convert", "()Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OsculatingToMeanElementsConverter::OsculatingToMeanElementsConverter(const ::org::orekit::propagation::SpacecraftState & a0, jint a1, const ::org::orekit::propagation::Propagator & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_09213e1af131873d, a0.this$, a1, a2.this$, a3)) {}

        ::org::orekit::propagation::SpacecraftState OsculatingToMeanElementsConverter::convert() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_convert_9d155cc8314c99cf]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        static PyObject *t_OsculatingToMeanElementsConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OsculatingToMeanElementsConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OsculatingToMeanElementsConverter_init_(t_OsculatingToMeanElementsConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OsculatingToMeanElementsConverter_convert(t_OsculatingToMeanElementsConverter *self);

        static PyMethodDef t_OsculatingToMeanElementsConverter__methods_[] = {
          DECLARE_METHOD(t_OsculatingToMeanElementsConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OsculatingToMeanElementsConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OsculatingToMeanElementsConverter, convert, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OsculatingToMeanElementsConverter)[] = {
          { Py_tp_methods, t_OsculatingToMeanElementsConverter__methods_ },
          { Py_tp_init, (void *) t_OsculatingToMeanElementsConverter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OsculatingToMeanElementsConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OsculatingToMeanElementsConverter, t_OsculatingToMeanElementsConverter, OsculatingToMeanElementsConverter);

        void t_OsculatingToMeanElementsConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(OsculatingToMeanElementsConverter), &PY_TYPE_DEF(OsculatingToMeanElementsConverter), module, "OsculatingToMeanElementsConverter", 0);
        }

        void t_OsculatingToMeanElementsConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OsculatingToMeanElementsConverter), "class_", make_descriptor(OsculatingToMeanElementsConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OsculatingToMeanElementsConverter), "wrapfn_", make_descriptor(t_OsculatingToMeanElementsConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OsculatingToMeanElementsConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OsculatingToMeanElementsConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OsculatingToMeanElementsConverter::initializeClass, 1)))
            return NULL;
          return t_OsculatingToMeanElementsConverter::wrap_Object(OsculatingToMeanElementsConverter(((t_OsculatingToMeanElementsConverter *) arg)->object.this$));
        }
        static PyObject *t_OsculatingToMeanElementsConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OsculatingToMeanElementsConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OsculatingToMeanElementsConverter_init_(t_OsculatingToMeanElementsConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jint a1;
          ::org::orekit::propagation::Propagator a2((jobject) NULL);
          jdouble a3;
          OsculatingToMeanElementsConverter object((jobject) NULL);

          if (!parseArgs(args, "kIkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::Propagator::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = OsculatingToMeanElementsConverter(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OsculatingToMeanElementsConverter_convert(t_OsculatingToMeanElementsConverter *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.convert());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/ranking/RankingAlgorithm.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {

        ::java::lang::Class *RankingAlgorithm::class$ = NULL;
        jmethodID *RankingAlgorithm::mids$ = NULL;
        bool RankingAlgorithm::live$ = false;

        jclass RankingAlgorithm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/ranking/RankingAlgorithm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_rank_14dee4cb8cc3e959] = env->getMethodID(cls, "rank", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< jdouble > RankingAlgorithm::rank(const JArray< jdouble > & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_rank_14dee4cb8cc3e959], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {
        static PyObject *t_RankingAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RankingAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RankingAlgorithm_rank(t_RankingAlgorithm *self, PyObject *arg);

        static PyMethodDef t_RankingAlgorithm__methods_[] = {
          DECLARE_METHOD(t_RankingAlgorithm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RankingAlgorithm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RankingAlgorithm, rank, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RankingAlgorithm)[] = {
          { Py_tp_methods, t_RankingAlgorithm__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RankingAlgorithm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RankingAlgorithm, t_RankingAlgorithm, RankingAlgorithm);

        void t_RankingAlgorithm::install(PyObject *module)
        {
          installType(&PY_TYPE(RankingAlgorithm), &PY_TYPE_DEF(RankingAlgorithm), module, "RankingAlgorithm", 0);
        }

        void t_RankingAlgorithm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RankingAlgorithm), "class_", make_descriptor(RankingAlgorithm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RankingAlgorithm), "wrapfn_", make_descriptor(t_RankingAlgorithm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RankingAlgorithm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RankingAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RankingAlgorithm::initializeClass, 1)))
            return NULL;
          return t_RankingAlgorithm::wrap_Object(RankingAlgorithm(((t_RankingAlgorithm *) arg)->object.this$));
        }
        static PyObject *t_RankingAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RankingAlgorithm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RankingAlgorithm_rank(t_RankingAlgorithm *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.rank(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "rank", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$VectorConsumer.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$VectorConsumer::class$ = NULL;
            jmethodID *ParseToken$VectorConsumer::mids$ = NULL;
            bool ParseToken$VectorConsumer::live$ = false;

            jclass ParseToken$VectorConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$VectorConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_1844f891addbac57] = env->getMethodID(cls, "accept", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$VectorConsumer::accept(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_1844f891addbac57], a0.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            static PyObject *t_ParseToken$VectorConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$VectorConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$VectorConsumer_accept(t_ParseToken$VectorConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$VectorConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$VectorConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$VectorConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$VectorConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$VectorConsumer)[] = {
              { Py_tp_methods, t_ParseToken$VectorConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$VectorConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$VectorConsumer, t_ParseToken$VectorConsumer, ParseToken$VectorConsumer);

            void t_ParseToken$VectorConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$VectorConsumer), &PY_TYPE_DEF(ParseToken$VectorConsumer), module, "ParseToken$VectorConsumer", 0);
            }

            void t_ParseToken$VectorConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$VectorConsumer), "class_", make_descriptor(ParseToken$VectorConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$VectorConsumer), "wrapfn_", make_descriptor(t_ParseToken$VectorConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$VectorConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$VectorConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$VectorConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$VectorConsumer::wrap_Object(ParseToken$VectorConsumer(((t_ParseToken$VectorConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$VectorConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$VectorConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$VectorConsumer_accept(t_ParseToken$VectorConsumer *self, PyObject *arg)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherData.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader$LineParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *CssiSpaceWeatherData::class$ = NULL;
            jmethodID *CssiSpaceWeatherData::mids$ = NULL;
            bool CssiSpaceWeatherData::live$ = false;
            ::java::lang::String *CssiSpaceWeatherData::DEFAULT_SUPPORTED_NAMES = NULL;

            jclass CssiSpaceWeatherData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
                mids$[mid_init$_4345325324782fee] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;)V");
                mids$[mid_init$_e81bfdc1c9755e45] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_6e4602706fa15bb8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_41d9572e040b2cb7] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_0b1b38f7a574edd9] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_50c1be3b32e426fc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader;Lorg/orekit/time/TimeScale;IDD)V");
                mids$[mid_init$_542b9091dd152c5f] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;IDD)V");
                mids$[mid_get24HoursKp_fd347811007a6ba3] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getAp_27b701db396ade01] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
                mids$[mid_getAverageFlux_fd347811007a6ba3] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getDailyFlux_fd347811007a6ba3] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getInstantFlux_fd347811007a6ba3] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getMeanFlux_fd347811007a6ba3] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getThreeHourlyKP_fd347811007a6ba3] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::java::lang::String & a0) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::org::orekit::data::DataSource & a0) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_4345325324782fee, a0.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::time::TimeScale & a1) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_e81bfdc1c9755e45, a0.this$, a1.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_6e4602706fa15bb8, a0.this$, a1.this$, a2.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_41d9572e040b2cb7, a0.this$, a1.this$, a2.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_0b1b38f7a574edd9, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader & a1, const ::org::orekit::time::TimeScale & a2, jint a3, jdouble a4, jdouble a5) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_50c1be3b32e426fc, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3, jint a4, jdouble a5, jdouble a6) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_542b9091dd152c5f, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6)) {}

            jdouble CssiSpaceWeatherData::get24HoursKp(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_get24HoursKp_fd347811007a6ba3], a0.this$);
            }

            JArray< jdouble > CssiSpaceWeatherData::getAp(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAp_27b701db396ade01], a0.this$));
            }

            jdouble CssiSpaceWeatherData::getAverageFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAverageFlux_fd347811007a6ba3], a0.this$);
            }

            jdouble CssiSpaceWeatherData::getDailyFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDailyFlux_fd347811007a6ba3], a0.this$);
            }

            jdouble CssiSpaceWeatherData::getInstantFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getInstantFlux_fd347811007a6ba3], a0.this$);
            }

            jdouble CssiSpaceWeatherData::getMeanFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanFlux_fd347811007a6ba3], a0.this$);
            }

            jdouble CssiSpaceWeatherData::getThreeHourlyKP(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyKP_fd347811007a6ba3], a0.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_CssiSpaceWeatherData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherData_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherData_of_(t_CssiSpaceWeatherData *self, PyObject *args);
            static int t_CssiSpaceWeatherData_init_(t_CssiSpaceWeatherData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CssiSpaceWeatherData_get24HoursKp(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getAp(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getAverageFlux(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getDailyFlux(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getInstantFlux(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getMeanFlux(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getThreeHourlyKP(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_get__parameters_(t_CssiSpaceWeatherData *self, void *data);
            static PyGetSetDef t_CssiSpaceWeatherData__fields_[] = {
              DECLARE_GET_FIELD(t_CssiSpaceWeatherData, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CssiSpaceWeatherData__methods_[] = {
              DECLARE_METHOD(t_CssiSpaceWeatherData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, of_, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, get24HoursKp, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getAp, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getAverageFlux, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getDailyFlux, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getInstantFlux, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getMeanFlux, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getThreeHourlyKP, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CssiSpaceWeatherData)[] = {
              { Py_tp_methods, t_CssiSpaceWeatherData__methods_ },
              { Py_tp_init, (void *) t_CssiSpaceWeatherData_init_ },
              { Py_tp_getset, t_CssiSpaceWeatherData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CssiSpaceWeatherData)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData),
              NULL
            };

            DEFINE_TYPE(CssiSpaceWeatherData, t_CssiSpaceWeatherData, CssiSpaceWeatherData);
            PyObject *t_CssiSpaceWeatherData::wrap_Object(const CssiSpaceWeatherData& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_CssiSpaceWeatherData::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherData *self = (t_CssiSpaceWeatherData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_CssiSpaceWeatherData::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_CssiSpaceWeatherData::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherData *self = (t_CssiSpaceWeatherData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_CssiSpaceWeatherData::install(PyObject *module)
            {
              installType(&PY_TYPE(CssiSpaceWeatherData), &PY_TYPE_DEF(CssiSpaceWeatherData), module, "CssiSpaceWeatherData", 0);
            }

            void t_CssiSpaceWeatherData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherData), "class_", make_descriptor(CssiSpaceWeatherData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherData), "wrapfn_", make_descriptor(t_CssiSpaceWeatherData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherData), "boxfn_", make_descriptor(boxObject));
              env->getClass(CssiSpaceWeatherData::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherData), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*CssiSpaceWeatherData::DEFAULT_SUPPORTED_NAMES)));
            }

            static PyObject *t_CssiSpaceWeatherData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CssiSpaceWeatherData::initializeClass, 1)))
                return NULL;
              return t_CssiSpaceWeatherData::wrap_Object(CssiSpaceWeatherData(((t_CssiSpaceWeatherData *) arg)->object.this$));
            }
            static PyObject *t_CssiSpaceWeatherData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CssiSpaceWeatherData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CssiSpaceWeatherData_of_(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CssiSpaceWeatherData_init_(t_CssiSpaceWeatherData *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::java::lang::String a0((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "s", &a0))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::time::TimeScale a1((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "kKk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_CssiSpaceWeatherDataLoader::parameters_, &a2))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "sKkk", ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_CssiSpaceWeatherDataLoader::parameters_, &a2, &a3))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2, a3));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  jint a3;
                  jdouble a4;
                  jdouble a5;
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "kKkIDD", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_CssiSpaceWeatherDataLoader::parameters_, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2, a3, a4, a5));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 7:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  jint a4;
                  jdouble a5;
                  jdouble a6;
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "sKkkIDD", ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_CssiSpaceWeatherDataLoader::parameters_, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2, a3, a4, a5, a6));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
               default:
               err:
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CssiSpaceWeatherData_get24HoursKp(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.get24HoursKp(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "get24HoursKp", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getAp(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getAp(a0));
                return result.wrap();
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getAp", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getAverageFlux(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getAverageFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getAverageFlux", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getDailyFlux(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDailyFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getDailyFlux", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getInstantFlux(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getInstantFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getInstantFlux", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getMeanFlux(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMeanFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getMeanFlux", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getThreeHourlyKP(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThreeHourlyKP(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getThreeHourlyKP", args, 2);
            }
            static PyObject *t_CssiSpaceWeatherData_get__parameters_(t_CssiSpaceWeatherData *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/PythonScheduler.h"
#include "org/orekit/estimation/measurements/generation/Scheduler.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "java/util/SortedSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonScheduler::class$ = NULL;
          jmethodID *PythonScheduler::mids$ = NULL;
          bool PythonScheduler::live$ = false;

          jclass PythonScheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonScheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_generate_3d5d4740e56d31ff] = env->getMethodID(cls, "generate", "(Ljava/util/Map;)Ljava/util/SortedSet;");
              mids$[mid_getBuilder_45574e80a4b0eb29] = env->getMethodID(cls, "getBuilder", "()Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;");
              mids$[mid_init_f89af00fc113b524] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonScheduler::PythonScheduler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonScheduler::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonScheduler::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonScheduler::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_PythonScheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonScheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonScheduler_of_(t_PythonScheduler *self, PyObject *args);
          static int t_PythonScheduler_init_(t_PythonScheduler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonScheduler_finalize(t_PythonScheduler *self);
          static PyObject *t_PythonScheduler_pythonExtension(t_PythonScheduler *self, PyObject *args);
          static jobject JNICALL t_PythonScheduler_generate0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonScheduler_getBuilder1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonScheduler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonScheduler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonScheduler_get__self(t_PythonScheduler *self, void *data);
          static PyObject *t_PythonScheduler_get__parameters_(t_PythonScheduler *self, void *data);
          static PyGetSetDef t_PythonScheduler__fields_[] = {
            DECLARE_GET_FIELD(t_PythonScheduler, self),
            DECLARE_GET_FIELD(t_PythonScheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonScheduler__methods_[] = {
            DECLARE_METHOD(t_PythonScheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonScheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonScheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonScheduler, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonScheduler, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonScheduler)[] = {
            { Py_tp_methods, t_PythonScheduler__methods_ },
            { Py_tp_init, (void *) t_PythonScheduler_init_ },
            { Py_tp_getset, t_PythonScheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonScheduler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonScheduler, t_PythonScheduler, PythonScheduler);
          PyObject *t_PythonScheduler::wrap_Object(const PythonScheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonScheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonScheduler *self = (t_PythonScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonScheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonScheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonScheduler *self = (t_PythonScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonScheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonScheduler), &PY_TYPE_DEF(PythonScheduler), module, "PythonScheduler", 1);
          }

          void t_PythonScheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonScheduler), "class_", make_descriptor(PythonScheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonScheduler), "wrapfn_", make_descriptor(t_PythonScheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonScheduler), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonScheduler::initializeClass);
            JNINativeMethod methods[] = {
              { "generate", "(Ljava/util/Map;)Ljava/util/SortedSet;", (void *) t_PythonScheduler_generate0 },
              { "getBuilder", "()Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;", (void *) t_PythonScheduler_getBuilder1 },
              { "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonScheduler_init2 },
              { "pythonDecRef", "()V", (void *) t_PythonScheduler_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonScheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonScheduler::initializeClass, 1)))
              return NULL;
            return t_PythonScheduler::wrap_Object(PythonScheduler(((t_PythonScheduler *) arg)->object.this$));
          }
          static PyObject *t_PythonScheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonScheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonScheduler_of_(t_PythonScheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonScheduler_init_(t_PythonScheduler *self, PyObject *args, PyObject *kwds)
          {
            PythonScheduler object((jobject) NULL);

            INT_CALL(object = PythonScheduler());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonScheduler_finalize(t_PythonScheduler *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonScheduler_pythonExtension(t_PythonScheduler *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static jobject JNICALL t_PythonScheduler_generate0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::SortedSet value((jobject) NULL);
            PyObject *o0 = ::java::util::t_Map::wrap_Object(::java::util::Map(a0));
            PyObject *result = PyObject_CallMethod(obj, "generate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::SortedSet::initializeClass, &value))
            {
              throwTypeError("generate", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static jobject JNICALL t_PythonScheduler_getBuilder1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getBuilder", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::generation::MeasurementBuilder::initializeClass, &value))
            {
              throwTypeError("getBuilder", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static void JNICALL t_PythonScheduler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonScheduler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonScheduler_get__self(t_PythonScheduler *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
          static PyObject *t_PythonScheduler_get__parameters_(t_PythonScheduler *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/LazyLoadedDataContext.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/forces/gravity/potential/LazyLoadedGravityFields.h"
#include "org/orekit/time/LazyLoadedTimeScales.h"
#include "org/orekit/frames/LazyLoadedFrames.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/bodies/LazyLoadedCelestialBodies.h"
#include "org/orekit/models/earth/LazyLoadedGeoMagneticFields.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *LazyLoadedDataContext::class$ = NULL;
      jmethodID *LazyLoadedDataContext::mids$ = NULL;
      bool LazyLoadedDataContext::live$ = false;

      jclass LazyLoadedDataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/LazyLoadedDataContext");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_getCelestialBodies_6bb03bd1907ccb0e] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/LazyLoadedCelestialBodies;");
          mids$[mid_getDataProvidersManager_58cee34d9bd73f33] = env->getMethodID(cls, "getDataProvidersManager", "()Lorg/orekit/data/DataProvidersManager;");
          mids$[mid_getFrames_5dce20e74866c277] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/LazyLoadedFrames;");
          mids$[mid_getGeoMagneticFields_d89697effe31d95a] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/LazyLoadedGeoMagneticFields;");
          mids$[mid_getGravityFields_7edff6ac38775a4d] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/LazyLoadedGravityFields;");
          mids$[mid_getTimeScales_aca7b99124f1f289] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/LazyLoadedTimeScales;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedDataContext::LazyLoadedDataContext() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      ::org::orekit::bodies::LazyLoadedCelestialBodies LazyLoadedDataContext::getCelestialBodies() const
      {
        return ::org::orekit::bodies::LazyLoadedCelestialBodies(env->callObjectMethod(this$, mids$[mid_getCelestialBodies_6bb03bd1907ccb0e]));
      }

      ::org::orekit::data::DataProvidersManager LazyLoadedDataContext::getDataProvidersManager() const
      {
        return ::org::orekit::data::DataProvidersManager(env->callObjectMethod(this$, mids$[mid_getDataProvidersManager_58cee34d9bd73f33]));
      }

      ::org::orekit::frames::LazyLoadedFrames LazyLoadedDataContext::getFrames() const
      {
        return ::org::orekit::frames::LazyLoadedFrames(env->callObjectMethod(this$, mids$[mid_getFrames_5dce20e74866c277]));
      }

      ::org::orekit::models::earth::LazyLoadedGeoMagneticFields LazyLoadedDataContext::getGeoMagneticFields() const
      {
        return ::org::orekit::models::earth::LazyLoadedGeoMagneticFields(env->callObjectMethod(this$, mids$[mid_getGeoMagneticFields_d89697effe31d95a]));
      }

      ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields LazyLoadedDataContext::getGravityFields() const
      {
        return ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields(env->callObjectMethod(this$, mids$[mid_getGravityFields_7edff6ac38775a4d]));
      }

      ::org::orekit::time::LazyLoadedTimeScales LazyLoadedDataContext::getTimeScales() const
      {
        return ::org::orekit::time::LazyLoadedTimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_aca7b99124f1f289]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_LazyLoadedDataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LazyLoadedDataContext_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LazyLoadedDataContext_init_(t_LazyLoadedDataContext *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LazyLoadedDataContext_getCelestialBodies(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_getDataProvidersManager(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_getFrames(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_getGeoMagneticFields(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_getGravityFields(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_getTimeScales(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_get__celestialBodies(t_LazyLoadedDataContext *self, void *data);
      static PyObject *t_LazyLoadedDataContext_get__dataProvidersManager(t_LazyLoadedDataContext *self, void *data);
      static PyObject *t_LazyLoadedDataContext_get__frames(t_LazyLoadedDataContext *self, void *data);
      static PyObject *t_LazyLoadedDataContext_get__geoMagneticFields(t_LazyLoadedDataContext *self, void *data);
      static PyObject *t_LazyLoadedDataContext_get__gravityFields(t_LazyLoadedDataContext *self, void *data);
      static PyObject *t_LazyLoadedDataContext_get__timeScales(t_LazyLoadedDataContext *self, void *data);
      static PyGetSetDef t_LazyLoadedDataContext__fields_[] = {
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, celestialBodies),
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, dataProvidersManager),
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, frames),
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, geoMagneticFields),
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, gravityFields),
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, timeScales),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LazyLoadedDataContext__methods_[] = {
        DECLARE_METHOD(t_LazyLoadedDataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedDataContext, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getCelestialBodies, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getDataProvidersManager, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getFrames, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getGeoMagneticFields, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getGravityFields, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getTimeScales, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LazyLoadedDataContext)[] = {
        { Py_tp_methods, t_LazyLoadedDataContext__methods_ },
        { Py_tp_init, (void *) t_LazyLoadedDataContext_init_ },
        { Py_tp_getset, t_LazyLoadedDataContext__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LazyLoadedDataContext)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LazyLoadedDataContext, t_LazyLoadedDataContext, LazyLoadedDataContext);

      void t_LazyLoadedDataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(LazyLoadedDataContext), &PY_TYPE_DEF(LazyLoadedDataContext), module, "LazyLoadedDataContext", 0);
      }

      void t_LazyLoadedDataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedDataContext), "class_", make_descriptor(LazyLoadedDataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedDataContext), "wrapfn_", make_descriptor(t_LazyLoadedDataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedDataContext), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LazyLoadedDataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LazyLoadedDataContext::initializeClass, 1)))
          return NULL;
        return t_LazyLoadedDataContext::wrap_Object(LazyLoadedDataContext(((t_LazyLoadedDataContext *) arg)->object.this$));
      }
      static PyObject *t_LazyLoadedDataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LazyLoadedDataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LazyLoadedDataContext_init_(t_LazyLoadedDataContext *self, PyObject *args, PyObject *kwds)
      {
        LazyLoadedDataContext object((jobject) NULL);

        INT_CALL(object = LazyLoadedDataContext());
        self->object = object;

        return 0;
      }

      static PyObject *t_LazyLoadedDataContext_getCelestialBodies(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies result((jobject) NULL);
        OBJ_CALL(result = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_getDataProvidersManager(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::data::DataProvidersManager result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataProvidersManager());
        return ::org::orekit::data::t_DataProvidersManager::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_getFrames(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::frames::LazyLoadedFrames result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrames());
        return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_getGeoMagneticFields(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::models::earth::LazyLoadedGeoMagneticFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_getGravityFields(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_getTimeScales(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::time::LazyLoadedTimeScales result((jobject) NULL);
        OBJ_CALL(result = self->object.getTimeScales());
        return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_get__celestialBodies(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies value((jobject) NULL);
        OBJ_CALL(value = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedDataContext_get__dataProvidersManager(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::data::DataProvidersManager value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataProvidersManager());
        return ::org::orekit::data::t_DataProvidersManager::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedDataContext_get__frames(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::frames::LazyLoadedFrames value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrames());
        return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedDataContext_get__geoMagneticFields(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::models::earth::LazyLoadedGeoMagneticFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedDataContext_get__gravityFields(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedDataContext_get__timeScales(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::time::LazyLoadedTimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/MultiplexedMeasurementBuilder.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/util/Map.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/MultiplexedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *MultiplexedMeasurementBuilder::class$ = NULL;
          jmethodID *MultiplexedMeasurementBuilder::mids$ = NULL;
          bool MultiplexedMeasurementBuilder::live$ = false;

          jclass MultiplexedMeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/MultiplexedMeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0e7c3032c7c93ed3] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_addModifier_cb38ed914ba48f20] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
              mids$[mid_build_2029b055d5cf26b6] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/MultiplexedMeasurement;");
              mids$[mid_getModifiers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
              mids$[mid_getSatellites_eb47c48e4fca882c] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_init_f89af00fc113b524] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MultiplexedMeasurementBuilder::MultiplexedMeasurementBuilder(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0e7c3032c7c93ed3, a0.this$)) {}

          void MultiplexedMeasurementBuilder::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addModifier_cb38ed914ba48f20], a0.this$);
          }

          ::org::orekit::estimation::measurements::MultiplexedMeasurement MultiplexedMeasurementBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::MultiplexedMeasurement(env->callObjectMethod(this$, mids$[mid_build_2029b055d5cf26b6], a0.this$, a1.this$));
          }

          ::java::util::List MultiplexedMeasurementBuilder::getModifiers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_e62d3bb06d56d7e3]));
          }

          JArray< ::org::orekit::estimation::measurements::ObservableSatellite > MultiplexedMeasurementBuilder::getSatellites() const
          {
            return JArray< ::org::orekit::estimation::measurements::ObservableSatellite >(env->callObjectMethod(this$, mids$[mid_getSatellites_eb47c48e4fca882c]));
          }

          void MultiplexedMeasurementBuilder::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_f89af00fc113b524], a0.this$, a1.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_MultiplexedMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultiplexedMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MultiplexedMeasurementBuilder_init_(t_MultiplexedMeasurementBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MultiplexedMeasurementBuilder_addModifier(t_MultiplexedMeasurementBuilder *self, PyObject *arg);
          static PyObject *t_MultiplexedMeasurementBuilder_build(t_MultiplexedMeasurementBuilder *self, PyObject *args);
          static PyObject *t_MultiplexedMeasurementBuilder_getModifiers(t_MultiplexedMeasurementBuilder *self);
          static PyObject *t_MultiplexedMeasurementBuilder_getSatellites(t_MultiplexedMeasurementBuilder *self);
          static PyObject *t_MultiplexedMeasurementBuilder_init(t_MultiplexedMeasurementBuilder *self, PyObject *args);
          static PyObject *t_MultiplexedMeasurementBuilder_get__modifiers(t_MultiplexedMeasurementBuilder *self, void *data);
          static PyObject *t_MultiplexedMeasurementBuilder_get__satellites(t_MultiplexedMeasurementBuilder *self, void *data);
          static PyGetSetDef t_MultiplexedMeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_MultiplexedMeasurementBuilder, modifiers),
            DECLARE_GET_FIELD(t_MultiplexedMeasurementBuilder, satellites),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MultiplexedMeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, addModifier, METH_O),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, build, METH_VARARGS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, getModifiers, METH_NOARGS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, getSatellites, METH_NOARGS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MultiplexedMeasurementBuilder)[] = {
            { Py_tp_methods, t_MultiplexedMeasurementBuilder__methods_ },
            { Py_tp_init, (void *) t_MultiplexedMeasurementBuilder_init_ },
            { Py_tp_getset, t_MultiplexedMeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MultiplexedMeasurementBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MultiplexedMeasurementBuilder, t_MultiplexedMeasurementBuilder, MultiplexedMeasurementBuilder);

          void t_MultiplexedMeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(MultiplexedMeasurementBuilder), &PY_TYPE_DEF(MultiplexedMeasurementBuilder), module, "MultiplexedMeasurementBuilder", 0);
          }

          void t_MultiplexedMeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurementBuilder), "class_", make_descriptor(MultiplexedMeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurementBuilder), "wrapfn_", make_descriptor(t_MultiplexedMeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurementBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MultiplexedMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MultiplexedMeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_MultiplexedMeasurementBuilder::wrap_Object(MultiplexedMeasurementBuilder(((t_MultiplexedMeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_MultiplexedMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MultiplexedMeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MultiplexedMeasurementBuilder_init_(t_MultiplexedMeasurementBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            MultiplexedMeasurementBuilder object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = MultiplexedMeasurementBuilder(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MultiplexedMeasurementBuilder_addModifier(t_MultiplexedMeasurementBuilder *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimationModifier a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimationModifier::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimationModifier::parameters_))
            {
              OBJ_CALL(self->object.addModifier(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addModifier", arg);
            return NULL;
          }

          static PyObject *t_MultiplexedMeasurementBuilder_build(t_MultiplexedMeasurementBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::MultiplexedMeasurement result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_MultiplexedMeasurement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "build", args);
            return NULL;
          }

          static PyObject *t_MultiplexedMeasurementBuilder_getModifiers(t_MultiplexedMeasurementBuilder *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(result);
          }

          static PyObject *t_MultiplexedMeasurementBuilder_getSatellites(t_MultiplexedMeasurementBuilder *self)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellites());
            return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }

          static PyObject *t_MultiplexedMeasurementBuilder_init(t_MultiplexedMeasurementBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_MultiplexedMeasurementBuilder_get__modifiers(t_MultiplexedMeasurementBuilder *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_MultiplexedMeasurementBuilder_get__satellites(t_MultiplexedMeasurementBuilder *self, void *data)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellites());
            return JArray<jobject>(value.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace metrics {

        ::java::lang::Class *ProbabilityOfCollision::class$ = NULL;
        jmethodID *ProbabilityOfCollision::mids$ = NULL;
        bool ProbabilityOfCollision::live$ = false;

        jclass ProbabilityOfCollision::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/ssa/metrics/ProbabilityOfCollision");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e870be4439f1c3c6] = env->getMethodID(cls, "<init>", "(DLjava/lang/String;)V");
            mids$[mid_init$_8ee693d34bd8b671] = env->getMethodID(cls, "<init>", "(DLjava/lang/String;Z)V");
            mids$[mid_init$_85334b51b21b2e44] = env->getMethodID(cls, "<init>", "(DDDLjava/lang/String;Z)V");
            mids$[mid_getLowerLimit_b74f83833fdad017] = env->getMethodID(cls, "getLowerLimit", "()D");
            mids$[mid_getProbabilityOfCollisionMethodName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getProbabilityOfCollisionMethodName", "()Ljava/lang/String;");
            mids$[mid_getUpperLimit_b74f83833fdad017] = env->getMethodID(cls, "getUpperLimit", "()D");
            mids$[mid_getValue_b74f83833fdad017] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_isMaxProbability_9ab94ac1dc23b105] = env->getMethodID(cls, "isMaxProbability", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ProbabilityOfCollision::ProbabilityOfCollision(jdouble a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e870be4439f1c3c6, a0, a1.this$)) {}

        ProbabilityOfCollision::ProbabilityOfCollision(jdouble a0, const ::java::lang::String & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ee693d34bd8b671, a0, a1.this$, a2)) {}

        ProbabilityOfCollision::ProbabilityOfCollision(jdouble a0, jdouble a1, jdouble a2, const ::java::lang::String & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_85334b51b21b2e44, a0, a1, a2, a3.this$, a4)) {}

        jdouble ProbabilityOfCollision::getLowerLimit() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLowerLimit_b74f83833fdad017]);
        }

        ::java::lang::String ProbabilityOfCollision::getProbabilityOfCollisionMethodName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProbabilityOfCollisionMethodName_1c1fa1e935d6cdcf]));
        }

        jdouble ProbabilityOfCollision::getUpperLimit() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getUpperLimit_b74f83833fdad017]);
        }

        jdouble ProbabilityOfCollision::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_b74f83833fdad017]);
        }

        jboolean ProbabilityOfCollision::isMaxProbability() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isMaxProbability_9ab94ac1dc23b105]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace metrics {
        static PyObject *t_ProbabilityOfCollision_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ProbabilityOfCollision_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ProbabilityOfCollision_init_(t_ProbabilityOfCollision *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ProbabilityOfCollision_getLowerLimit(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_getProbabilityOfCollisionMethodName(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_getUpperLimit(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_getValue(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_isMaxProbability(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_get__lowerLimit(t_ProbabilityOfCollision *self, void *data);
        static PyObject *t_ProbabilityOfCollision_get__maxProbability(t_ProbabilityOfCollision *self, void *data);
        static PyObject *t_ProbabilityOfCollision_get__probabilityOfCollisionMethodName(t_ProbabilityOfCollision *self, void *data);
        static PyObject *t_ProbabilityOfCollision_get__upperLimit(t_ProbabilityOfCollision *self, void *data);
        static PyObject *t_ProbabilityOfCollision_get__value(t_ProbabilityOfCollision *self, void *data);
        static PyGetSetDef t_ProbabilityOfCollision__fields_[] = {
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, lowerLimit),
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, maxProbability),
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, probabilityOfCollisionMethodName),
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, upperLimit),
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ProbabilityOfCollision__methods_[] = {
          DECLARE_METHOD(t_ProbabilityOfCollision, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ProbabilityOfCollision, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ProbabilityOfCollision, getLowerLimit, METH_NOARGS),
          DECLARE_METHOD(t_ProbabilityOfCollision, getProbabilityOfCollisionMethodName, METH_NOARGS),
          DECLARE_METHOD(t_ProbabilityOfCollision, getUpperLimit, METH_NOARGS),
          DECLARE_METHOD(t_ProbabilityOfCollision, getValue, METH_NOARGS),
          DECLARE_METHOD(t_ProbabilityOfCollision, isMaxProbability, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ProbabilityOfCollision)[] = {
          { Py_tp_methods, t_ProbabilityOfCollision__methods_ },
          { Py_tp_init, (void *) t_ProbabilityOfCollision_init_ },
          { Py_tp_getset, t_ProbabilityOfCollision__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ProbabilityOfCollision)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ProbabilityOfCollision, t_ProbabilityOfCollision, ProbabilityOfCollision);

        void t_ProbabilityOfCollision::install(PyObject *module)
        {
          installType(&PY_TYPE(ProbabilityOfCollision), &PY_TYPE_DEF(ProbabilityOfCollision), module, "ProbabilityOfCollision", 0);
        }

        void t_ProbabilityOfCollision::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProbabilityOfCollision), "class_", make_descriptor(ProbabilityOfCollision::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProbabilityOfCollision), "wrapfn_", make_descriptor(t_ProbabilityOfCollision::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProbabilityOfCollision), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ProbabilityOfCollision_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ProbabilityOfCollision::initializeClass, 1)))
            return NULL;
          return t_ProbabilityOfCollision::wrap_Object(ProbabilityOfCollision(((t_ProbabilityOfCollision *) arg)->object.this$));
        }
        static PyObject *t_ProbabilityOfCollision_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ProbabilityOfCollision::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ProbabilityOfCollision_init_(t_ProbabilityOfCollision *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::java::lang::String a1((jobject) NULL);
              ProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "Ds", &a0, &a1))
              {
                INT_CALL(object = ProbabilityOfCollision(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              ::java::lang::String a1((jobject) NULL);
              jboolean a2;
              ProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "DsZ", &a0, &a1, &a2))
              {
                INT_CALL(object = ProbabilityOfCollision(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ::java::lang::String a3((jobject) NULL);
              jboolean a4;
              ProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "DDDsZ", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = ProbabilityOfCollision(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ProbabilityOfCollision_getLowerLimit(t_ProbabilityOfCollision *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLowerLimit());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ProbabilityOfCollision_getProbabilityOfCollisionMethodName(t_ProbabilityOfCollision *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProbabilityOfCollisionMethodName());
          return j2p(result);
        }

        static PyObject *t_ProbabilityOfCollision_getUpperLimit(t_ProbabilityOfCollision *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getUpperLimit());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ProbabilityOfCollision_getValue(t_ProbabilityOfCollision *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ProbabilityOfCollision_isMaxProbability(t_ProbabilityOfCollision *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isMaxProbability());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ProbabilityOfCollision_get__lowerLimit(t_ProbabilityOfCollision *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLowerLimit());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ProbabilityOfCollision_get__maxProbability(t_ProbabilityOfCollision *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isMaxProbability());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ProbabilityOfCollision_get__probabilityOfCollisionMethodName(t_ProbabilityOfCollision *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProbabilityOfCollisionMethodName());
          return j2p(value);
        }

        static PyObject *t_ProbabilityOfCollision_get__upperLimit(t_ProbabilityOfCollision *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getUpperLimit());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ProbabilityOfCollision_get__value(t_ProbabilityOfCollision *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/DiskGenerator.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/enclosing/SupportBallGenerator.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *DiskGenerator::class$ = NULL;
          jmethodID *DiskGenerator::mids$ = NULL;
          bool DiskGenerator::live$ = false;

          jclass DiskGenerator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/DiskGenerator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_ballOnSupport_1093dd6e31c1164f] = env->getMethodID(cls, "ballOnSupport", "(Ljava/util/List;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DiskGenerator::DiskGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ::org::hipparchus::geometry::enclosing::EnclosingBall DiskGenerator::ballOnSupport(const ::java::util::List & a0) const
          {
            return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_ballOnSupport_1093dd6e31c1164f], a0.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          static PyObject *t_DiskGenerator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DiskGenerator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DiskGenerator_init_(t_DiskGenerator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DiskGenerator_ballOnSupport(t_DiskGenerator *self, PyObject *arg);

          static PyMethodDef t_DiskGenerator__methods_[] = {
            DECLARE_METHOD(t_DiskGenerator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DiskGenerator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DiskGenerator, ballOnSupport, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DiskGenerator)[] = {
            { Py_tp_methods, t_DiskGenerator__methods_ },
            { Py_tp_init, (void *) t_DiskGenerator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DiskGenerator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DiskGenerator, t_DiskGenerator, DiskGenerator);

          void t_DiskGenerator::install(PyObject *module)
          {
            installType(&PY_TYPE(DiskGenerator), &PY_TYPE_DEF(DiskGenerator), module, "DiskGenerator", 0);
          }

          void t_DiskGenerator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiskGenerator), "class_", make_descriptor(DiskGenerator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiskGenerator), "wrapfn_", make_descriptor(t_DiskGenerator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiskGenerator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DiskGenerator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DiskGenerator::initializeClass, 1)))
              return NULL;
            return t_DiskGenerator::wrap_Object(DiskGenerator(((t_DiskGenerator *) arg)->object.this$));
          }
          static PyObject *t_DiskGenerator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DiskGenerator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DiskGenerator_init_(t_DiskGenerator *self, PyObject *args, PyObject *kwds)
          {
            DiskGenerator object((jobject) NULL);

            INT_CALL(object = DiskGenerator());
            self->object = object;

            return 0;
          }

          static PyObject *t_DiskGenerator_ballOnSupport(t_DiskGenerator *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.ballOnSupport(a0));
              return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D), ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D));
            }

            PyErr_SetArgsError((PyObject *) self, "ballOnSupport", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D$NoSubSpaceException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *Euclidean1D$NoSubSpaceException::class$ = NULL;
          jmethodID *Euclidean1D$NoSubSpaceException::mids$ = NULL;
          bool Euclidean1D$NoSubSpaceException::live$ = false;

          jclass Euclidean1D$NoSubSpaceException::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/Euclidean1D$NoSubSpaceException");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Euclidean1D$NoSubSpaceException::Euclidean1D$NoSubSpaceException() : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {
          static PyObject *t_Euclidean1D$NoSubSpaceException_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean1D$NoSubSpaceException_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Euclidean1D$NoSubSpaceException_init_(t_Euclidean1D$NoSubSpaceException *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_Euclidean1D$NoSubSpaceException__methods_[] = {
            DECLARE_METHOD(t_Euclidean1D$NoSubSpaceException, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean1D$NoSubSpaceException, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Euclidean1D$NoSubSpaceException)[] = {
            { Py_tp_methods, t_Euclidean1D$NoSubSpaceException__methods_ },
            { Py_tp_init, (void *) t_Euclidean1D$NoSubSpaceException_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Euclidean1D$NoSubSpaceException)[] = {
            &PY_TYPE_DEF(::org::hipparchus::exception::MathRuntimeException),
            NULL
          };

          DEFINE_TYPE(Euclidean1D$NoSubSpaceException, t_Euclidean1D$NoSubSpaceException, Euclidean1D$NoSubSpaceException);

          void t_Euclidean1D$NoSubSpaceException::install(PyObject *module)
          {
            installType(&PY_TYPE(Euclidean1D$NoSubSpaceException), &PY_TYPE_DEF(Euclidean1D$NoSubSpaceException), module, "Euclidean1D$NoSubSpaceException", 0);
          }

          void t_Euclidean1D$NoSubSpaceException::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D$NoSubSpaceException), "class_", make_descriptor(Euclidean1D$NoSubSpaceException::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D$NoSubSpaceException), "wrapfn_", make_descriptor(t_Euclidean1D$NoSubSpaceException::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D$NoSubSpaceException), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Euclidean1D$NoSubSpaceException_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Euclidean1D$NoSubSpaceException::initializeClass, 1)))
              return NULL;
            return t_Euclidean1D$NoSubSpaceException::wrap_Object(Euclidean1D$NoSubSpaceException(((t_Euclidean1D$NoSubSpaceException *) arg)->object.this$));
          }
          static PyObject *t_Euclidean1D$NoSubSpaceException_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Euclidean1D$NoSubSpaceException::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Euclidean1D$NoSubSpaceException_init_(t_Euclidean1D$NoSubSpaceException *self, PyObject *args, PyObject *kwds)
          {
            Euclidean1D$NoSubSpaceException object((jobject) NULL);

            INT_CALL(object = Euclidean1D$NoSubSpaceException());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
