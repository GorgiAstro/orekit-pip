#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *GaussNewtonOptimizer::class$ = NULL;
            jmethodID *GaussNewtonOptimizer::mids$ = NULL;
            bool GaussNewtonOptimizer::live$ = false;

            jclass GaussNewtonOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_344ee2375c0e4459] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Z)V");
                mids$[mid_getDecomposer_73fdbc83e1233feb] = env->getMethodID(cls, "getDecomposer", "()Lorg/hipparchus/linear/MatrixDecomposer;");
                mids$[mid_isFormNormalEquations_e470b6d9e0d979db] = env->getMethodID(cls, "isFormNormalEquations", "()Z");
                mids$[mid_optimize_15b17ff9a423a2d3] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
                mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                mids$[mid_withDecomposer_eae59b924c777ec4] = env->getMethodID(cls, "withDecomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer;");
                mids$[mid_withFormNormalEquations_42739adf68fa6cb0] = env->getMethodID(cls, "withFormNormalEquations", "(Z)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GaussNewtonOptimizer::GaussNewtonOptimizer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            GaussNewtonOptimizer::GaussNewtonOptimizer(const ::org::hipparchus::linear::MatrixDecomposer & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_344ee2375c0e4459, a0.this$, a1)) {}

            ::org::hipparchus::linear::MatrixDecomposer GaussNewtonOptimizer::getDecomposer() const
            {
              return ::org::hipparchus::linear::MatrixDecomposer(env->callObjectMethod(this$, mids$[mid_getDecomposer_73fdbc83e1233feb]));
            }

            jboolean GaussNewtonOptimizer::isFormNormalEquations() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isFormNormalEquations_e470b6d9e0d979db]);
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum GaussNewtonOptimizer::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_15b17ff9a423a2d3], a0.this$));
            }

            ::java::lang::String GaussNewtonOptimizer::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
            }

            GaussNewtonOptimizer GaussNewtonOptimizer::withDecomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
            {
              return GaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withDecomposer_eae59b924c777ec4], a0.this$));
            }

            GaussNewtonOptimizer GaussNewtonOptimizer::withFormNormalEquations(jboolean a0) const
            {
              return GaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withFormNormalEquations_42739adf68fa6cb0], a0));
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
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            static PyObject *t_GaussNewtonOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GaussNewtonOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GaussNewtonOptimizer_init_(t_GaussNewtonOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GaussNewtonOptimizer_getDecomposer(t_GaussNewtonOptimizer *self);
            static PyObject *t_GaussNewtonOptimizer_isFormNormalEquations(t_GaussNewtonOptimizer *self);
            static PyObject *t_GaussNewtonOptimizer_optimize(t_GaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_GaussNewtonOptimizer_toString(t_GaussNewtonOptimizer *self, PyObject *args);
            static PyObject *t_GaussNewtonOptimizer_withDecomposer(t_GaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_GaussNewtonOptimizer_withFormNormalEquations(t_GaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_GaussNewtonOptimizer_get__decomposer(t_GaussNewtonOptimizer *self, void *data);
            static PyObject *t_GaussNewtonOptimizer_get__formNormalEquations(t_GaussNewtonOptimizer *self, void *data);
            static PyGetSetDef t_GaussNewtonOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_GaussNewtonOptimizer, decomposer),
              DECLARE_GET_FIELD(t_GaussNewtonOptimizer, formNormalEquations),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GaussNewtonOptimizer__methods_[] = {
              DECLARE_METHOD(t_GaussNewtonOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, getDecomposer, METH_NOARGS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, isFormNormalEquations, METH_NOARGS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, optimize, METH_O),
              DECLARE_METHOD(t_GaussNewtonOptimizer, toString, METH_VARARGS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, withDecomposer, METH_O),
              DECLARE_METHOD(t_GaussNewtonOptimizer, withFormNormalEquations, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GaussNewtonOptimizer)[] = {
              { Py_tp_methods, t_GaussNewtonOptimizer__methods_ },
              { Py_tp_init, (void *) t_GaussNewtonOptimizer_init_ },
              { Py_tp_getset, t_GaussNewtonOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GaussNewtonOptimizer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GaussNewtonOptimizer, t_GaussNewtonOptimizer, GaussNewtonOptimizer);

            void t_GaussNewtonOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(GaussNewtonOptimizer), &PY_TYPE_DEF(GaussNewtonOptimizer), module, "GaussNewtonOptimizer", 0);
            }

            void t_GaussNewtonOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GaussNewtonOptimizer), "class_", make_descriptor(GaussNewtonOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GaussNewtonOptimizer), "wrapfn_", make_descriptor(t_GaussNewtonOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GaussNewtonOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GaussNewtonOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GaussNewtonOptimizer::initializeClass, 1)))
                return NULL;
              return t_GaussNewtonOptimizer::wrap_Object(GaussNewtonOptimizer(((t_GaussNewtonOptimizer *) arg)->object.this$));
            }
            static PyObject *t_GaussNewtonOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GaussNewtonOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GaussNewtonOptimizer_init_(t_GaussNewtonOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  GaussNewtonOptimizer object((jobject) NULL);

                  INT_CALL(object = GaussNewtonOptimizer());
                  self->object = object;
                  break;
                }
               case 2:
                {
                  ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
                  jboolean a1;
                  GaussNewtonOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "kZ", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0, &a1))
                  {
                    INT_CALL(object = GaussNewtonOptimizer(a0, a1));
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

            static PyObject *t_GaussNewtonOptimizer_getDecomposer(t_GaussNewtonOptimizer *self)
            {
              ::org::hipparchus::linear::MatrixDecomposer result((jobject) NULL);
              OBJ_CALL(result = self->object.getDecomposer());
              return ::org::hipparchus::linear::t_MatrixDecomposer::wrap_Object(result);
            }

            static PyObject *t_GaussNewtonOptimizer_isFormNormalEquations(t_GaussNewtonOptimizer *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isFormNormalEquations());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_GaussNewtonOptimizer_optimize(t_GaussNewtonOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "optimize", arg);
              return NULL;
            }

            static PyObject *t_GaussNewtonOptimizer_toString(t_GaussNewtonOptimizer *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }

              return callSuper(PY_TYPE(GaussNewtonOptimizer), (PyObject *) self, "toString", args, 2);
            }

            static PyObject *t_GaussNewtonOptimizer_withDecomposer(t_GaussNewtonOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
              GaussNewtonOptimizer result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.withDecomposer(a0));
                return t_GaussNewtonOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withDecomposer", arg);
              return NULL;
            }

            static PyObject *t_GaussNewtonOptimizer_withFormNormalEquations(t_GaussNewtonOptimizer *self, PyObject *arg)
            {
              jboolean a0;
              GaussNewtonOptimizer result((jobject) NULL);

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(result = self->object.withFormNormalEquations(a0));
                return t_GaussNewtonOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withFormNormalEquations", arg);
              return NULL;
            }

            static PyObject *t_GaussNewtonOptimizer_get__decomposer(t_GaussNewtonOptimizer *self, void *data)
            {
              ::org::hipparchus::linear::MatrixDecomposer value((jobject) NULL);
              OBJ_CALL(value = self->object.getDecomposer());
              return ::org::hipparchus::linear::t_MatrixDecomposer::wrap_Object(value);
            }

            static PyObject *t_GaussNewtonOptimizer_get__formNormalEquations(t_GaussNewtonOptimizer *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isFormNormalEquations());
              Py_RETURN_BOOL(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/RinexFile.h"
#include "org/orekit/files/rinex/section/RinexBaseHeader.h"
#include "org/orekit/files/rinex/section/RinexComment.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {

        ::java::lang::Class *RinexFile::class$ = NULL;
        jmethodID *RinexFile::mids$ = NULL;
        bool RinexFile::live$ = false;

        jclass RinexFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/rinex/RinexFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addComment_633243bab5f73a6a] = env->getMethodID(cls, "addComment", "(Lorg/orekit/files/rinex/section/RinexComment;)V");
            mids$[mid_getComments_a6156df500549a58] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
            mids$[mid_getHeader_56bd6189f87702f0] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/rinex/section/RinexBaseHeader;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void RinexFile::addComment(const ::org::orekit::files::rinex::section::RinexComment & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addComment_633243bab5f73a6a], a0.this$);
        }

        ::java::util::List RinexFile::getComments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_a6156df500549a58]));
        }

        ::org::orekit::files::rinex::section::RinexBaseHeader RinexFile::getHeader() const
        {
          return ::org::orekit::files::rinex::section::RinexBaseHeader(env->callObjectMethod(this$, mids$[mid_getHeader_56bd6189f87702f0]));
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
      namespace rinex {
        static PyObject *t_RinexFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RinexFile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RinexFile_of_(t_RinexFile *self, PyObject *args);
        static PyObject *t_RinexFile_addComment(t_RinexFile *self, PyObject *arg);
        static PyObject *t_RinexFile_getComments(t_RinexFile *self);
        static PyObject *t_RinexFile_getHeader(t_RinexFile *self);
        static PyObject *t_RinexFile_get__comments(t_RinexFile *self, void *data);
        static PyObject *t_RinexFile_get__header(t_RinexFile *self, void *data);
        static PyObject *t_RinexFile_get__parameters_(t_RinexFile *self, void *data);
        static PyGetSetDef t_RinexFile__fields_[] = {
          DECLARE_GET_FIELD(t_RinexFile, comments),
          DECLARE_GET_FIELD(t_RinexFile, header),
          DECLARE_GET_FIELD(t_RinexFile, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RinexFile__methods_[] = {
          DECLARE_METHOD(t_RinexFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RinexFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RinexFile, of_, METH_VARARGS),
          DECLARE_METHOD(t_RinexFile, addComment, METH_O),
          DECLARE_METHOD(t_RinexFile, getComments, METH_NOARGS),
          DECLARE_METHOD(t_RinexFile, getHeader, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RinexFile)[] = {
          { Py_tp_methods, t_RinexFile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RinexFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RinexFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RinexFile, t_RinexFile, RinexFile);
        PyObject *t_RinexFile::wrap_Object(const RinexFile& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RinexFile::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RinexFile *self = (t_RinexFile *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RinexFile::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RinexFile::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RinexFile *self = (t_RinexFile *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RinexFile::install(PyObject *module)
        {
          installType(&PY_TYPE(RinexFile), &PY_TYPE_DEF(RinexFile), module, "RinexFile", 0);
        }

        void t_RinexFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFile), "class_", make_descriptor(RinexFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFile), "wrapfn_", make_descriptor(t_RinexFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RinexFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RinexFile::initializeClass, 1)))
            return NULL;
          return t_RinexFile::wrap_Object(RinexFile(((t_RinexFile *) arg)->object.this$));
        }
        static PyObject *t_RinexFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RinexFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RinexFile_of_(t_RinexFile *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_RinexFile_addComment(t_RinexFile *self, PyObject *arg)
        {
          ::org::orekit::files::rinex::section::RinexComment a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::rinex::section::RinexComment::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addComment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addComment", arg);
          return NULL;
        }

        static PyObject *t_RinexFile_getComments(t_RinexFile *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::section::PY_TYPE(RinexComment));
        }

        static PyObject *t_RinexFile_getHeader(t_RinexFile *self)
        {
          ::org::orekit::files::rinex::section::RinexBaseHeader result((jobject) NULL);
          OBJ_CALL(result = self->object.getHeader());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::rinex::section::t_RinexBaseHeader::wrap_Object(result);
        }
        static PyObject *t_RinexFile_get__parameters_(t_RinexFile *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_RinexFile_get__comments(t_RinexFile *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_RinexFile_get__header(t_RinexFile *self, void *data)
        {
          ::org::orekit::files::rinex::section::RinexBaseHeader value((jobject) NULL);
          OBJ_CALL(value = self->object.getHeader());
          return ::org::orekit::files::rinex::section::t_RinexBaseHeader::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/encounter/ValsecchiEncounterFrame.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *ValsecchiEncounterFrame::class$ = NULL;
        jmethodID *ValsecchiEncounterFrame::mids$ = NULL;
        bool ValsecchiEncounterFrame::live$ = false;

        jclass ValsecchiEncounterFrame::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/ValsecchiEncounterFrame");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2fcbcb00b2514447] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;)V");
            mids$[mid_init$_d12117948cc23ea0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;)V");
            mids$[mid_getAxisNormalToCollisionPlane_17a952530a808943] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_dc29118b4d22b28d] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_rotationFromInertial_891f682396b75876] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_0483676d141ad17c] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ValsecchiEncounterFrame::ValsecchiEncounterFrame(const ::org::orekit::utils::FieldPVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_2fcbcb00b2514447, a0.this$)) {}

        ValsecchiEncounterFrame::ValsecchiEncounterFrame(const ::org::orekit::utils::PVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_d12117948cc23ea0, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ValsecchiEncounterFrame::getAxisNormalToCollisionPlane() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_17a952530a808943]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ValsecchiEncounterFrame::getAxisNormalToCollisionPlane(const ::org::hipparchus::Field & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_dc29118b4d22b28d], a0.this$));
        }

        ::java::lang::String ValsecchiEncounterFrame::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation ValsecchiEncounterFrame::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_891f682396b75876], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation ValsecchiEncounterFrame::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_0483676d141ad17c], a0.this$, a1.this$, a2.this$));
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
    namespace frames {
      namespace encounter {
        static PyObject *t_ValsecchiEncounterFrame_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ValsecchiEncounterFrame_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ValsecchiEncounterFrame_init_(t_ValsecchiEncounterFrame *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ValsecchiEncounterFrame_getAxisNormalToCollisionPlane(t_ValsecchiEncounterFrame *self, PyObject *args);
        static PyObject *t_ValsecchiEncounterFrame_getName(t_ValsecchiEncounterFrame *self, PyObject *args);
        static PyObject *t_ValsecchiEncounterFrame_rotationFromInertial(t_ValsecchiEncounterFrame *self, PyObject *args);
        static PyObject *t_ValsecchiEncounterFrame_get__axisNormalToCollisionPlane(t_ValsecchiEncounterFrame *self, void *data);
        static PyObject *t_ValsecchiEncounterFrame_get__name(t_ValsecchiEncounterFrame *self, void *data);
        static PyGetSetDef t_ValsecchiEncounterFrame__fields_[] = {
          DECLARE_GET_FIELD(t_ValsecchiEncounterFrame, axisNormalToCollisionPlane),
          DECLARE_GET_FIELD(t_ValsecchiEncounterFrame, name),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ValsecchiEncounterFrame__methods_[] = {
          DECLARE_METHOD(t_ValsecchiEncounterFrame, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ValsecchiEncounterFrame, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ValsecchiEncounterFrame, getAxisNormalToCollisionPlane, METH_VARARGS),
          DECLARE_METHOD(t_ValsecchiEncounterFrame, getName, METH_VARARGS),
          DECLARE_METHOD(t_ValsecchiEncounterFrame, rotationFromInertial, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ValsecchiEncounterFrame)[] = {
          { Py_tp_methods, t_ValsecchiEncounterFrame__methods_ },
          { Py_tp_init, (void *) t_ValsecchiEncounterFrame_init_ },
          { Py_tp_getset, t_ValsecchiEncounterFrame__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ValsecchiEncounterFrame)[] = {
          &PY_TYPE_DEF(::org::orekit::frames::encounter::AbstractEncounterLOF),
          NULL
        };

        DEFINE_TYPE(ValsecchiEncounterFrame, t_ValsecchiEncounterFrame, ValsecchiEncounterFrame);

        void t_ValsecchiEncounterFrame::install(PyObject *module)
        {
          installType(&PY_TYPE(ValsecchiEncounterFrame), &PY_TYPE_DEF(ValsecchiEncounterFrame), module, "ValsecchiEncounterFrame", 0);
        }

        void t_ValsecchiEncounterFrame::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ValsecchiEncounterFrame), "class_", make_descriptor(ValsecchiEncounterFrame::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ValsecchiEncounterFrame), "wrapfn_", make_descriptor(t_ValsecchiEncounterFrame::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ValsecchiEncounterFrame), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ValsecchiEncounterFrame_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ValsecchiEncounterFrame::initializeClass, 1)))
            return NULL;
          return t_ValsecchiEncounterFrame::wrap_Object(ValsecchiEncounterFrame(((t_ValsecchiEncounterFrame *) arg)->object.this$));
        }
        static PyObject *t_ValsecchiEncounterFrame_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ValsecchiEncounterFrame::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ValsecchiEncounterFrame_init_(t_ValsecchiEncounterFrame *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
              PyTypeObject **p0;
              ValsecchiEncounterFrame object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                INT_CALL(object = ValsecchiEncounterFrame(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ValsecchiEncounterFrame object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
              {
                INT_CALL(object = ValsecchiEncounterFrame(a0));
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

        static PyObject *t_ValsecchiEncounterFrame_getAxisNormalToCollisionPlane(t_ValsecchiEncounterFrame *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getAxisNormalToCollisionPlane());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.getAxisNormalToCollisionPlane(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(ValsecchiEncounterFrame), (PyObject *) self, "getAxisNormalToCollisionPlane", args, 2);
        }

        static PyObject *t_ValsecchiEncounterFrame_getName(t_ValsecchiEncounterFrame *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          return callSuper(PY_TYPE(ValsecchiEncounterFrame), (PyObject *) self, "getName", args, 2);
        }

        static PyObject *t_ValsecchiEncounterFrame_rotationFromInertial(t_ValsecchiEncounterFrame *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(ValsecchiEncounterFrame), (PyObject *) self, "rotationFromInertial", args, 2);
        }

        static PyObject *t_ValsecchiEncounterFrame_get__axisNormalToCollisionPlane(t_ValsecchiEncounterFrame *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getAxisNormalToCollisionPlane());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_ValsecchiEncounterFrame_get__name(t_ValsecchiEncounterFrame *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/util/Map.h"
#include "org/orekit/files/sp3/SP3Segment.h"
#include "org/orekit/frames/Frame.h"
#include "java/util/Collection.h"
#include "org/orekit/files/sp3/SP3Header.h"
#include "org/orekit/files/sp3/SP3.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/sp3/SP3Ephemeris.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3::class$ = NULL;
        jmethodID *SP3::mids$ = NULL;
        bool SP3::live$ = false;

        jclass SP3::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8859cbb85555e51b] = env->getMethodID(cls, "<init>", "(DILorg/orekit/frames/Frame;)V");
            mids$[mid_addSatellite_e939c6558ae8d313] = env->getMethodID(cls, "addSatellite", "(Ljava/lang/String;)V");
            mids$[mid_containsSatellite_6b161f495ea569b8] = env->getMethodID(cls, "containsSatellite", "(Ljava/lang/String;)Z");
            mids$[mid_getEphemeris_d5320b68d65f4db4] = env->getMethodID(cls, "getEphemeris", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3Ephemeris;");
            mids$[mid_getEphemeris_e6c169c232fc0e88] = env->getMethodID(cls, "getEphemeris", "(I)Lorg/orekit/files/sp3/SP3Ephemeris;");
            mids$[mid_getHeader_11aed2461124335a] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/sp3/SP3Header;");
            mids$[mid_getSatelliteCount_f2f64475e4580546] = env->getMethodID(cls, "getSatelliteCount", "()I");
            mids$[mid_getSatellites_d6753b7055940a54] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");
            mids$[mid_splice_af87c3f4a89e91bb] = env->getStaticMethodID(cls, "splice", "(Ljava/util/Collection;)Lorg/orekit/files/sp3/SP3;");
            mids$[mid_validate_90f9b414554a0838] = env->getMethodID(cls, "validate", "(ZLjava/lang/String;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3::SP3(jdouble a0, jint a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8859cbb85555e51b, a0, a1, a2.this$)) {}

        void SP3::addSatellite(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatellite_e939c6558ae8d313], a0.this$);
        }

        jboolean SP3::containsSatellite(const ::java::lang::String & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_containsSatellite_6b161f495ea569b8], a0.this$);
        }

        ::org::orekit::files::sp3::SP3Ephemeris SP3::getEphemeris(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::sp3::SP3Ephemeris(env->callObjectMethod(this$, mids$[mid_getEphemeris_d5320b68d65f4db4], a0.this$));
        }

        ::org::orekit::files::sp3::SP3Ephemeris SP3::getEphemeris(jint a0) const
        {
          return ::org::orekit::files::sp3::SP3Ephemeris(env->callObjectMethod(this$, mids$[mid_getEphemeris_e6c169c232fc0e88], a0));
        }

        ::org::orekit::files::sp3::SP3Header SP3::getHeader() const
        {
          return ::org::orekit::files::sp3::SP3Header(env->callObjectMethod(this$, mids$[mid_getHeader_11aed2461124335a]));
        }

        jint SP3::getSatelliteCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getSatelliteCount_f2f64475e4580546]);
        }

        ::java::util::Map SP3::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_d6753b7055940a54]));
        }

        SP3 SP3::splice(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3(env->callStaticObjectMethod(cls, mids$[mid_splice_af87c3f4a89e91bb], a0.this$));
        }

        void SP3::validate(jboolean a0, const ::java::lang::String & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_validate_90f9b414554a0838], a0, a1.this$);
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
      namespace sp3 {
        static PyObject *t_SP3_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3_init_(t_SP3 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3_addSatellite(t_SP3 *self, PyObject *arg);
        static PyObject *t_SP3_containsSatellite(t_SP3 *self, PyObject *arg);
        static PyObject *t_SP3_getEphemeris(t_SP3 *self, PyObject *args);
        static PyObject *t_SP3_getHeader(t_SP3 *self);
        static PyObject *t_SP3_getSatelliteCount(t_SP3 *self);
        static PyObject *t_SP3_getSatellites(t_SP3 *self);
        static PyObject *t_SP3_splice(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3_validate(t_SP3 *self, PyObject *args);
        static PyObject *t_SP3_get__header(t_SP3 *self, void *data);
        static PyObject *t_SP3_get__satelliteCount(t_SP3 *self, void *data);
        static PyObject *t_SP3_get__satellites(t_SP3 *self, void *data);
        static PyGetSetDef t_SP3__fields_[] = {
          DECLARE_GET_FIELD(t_SP3, header),
          DECLARE_GET_FIELD(t_SP3, satelliteCount),
          DECLARE_GET_FIELD(t_SP3, satellites),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3__methods_[] = {
          DECLARE_METHOD(t_SP3, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3, addSatellite, METH_O),
          DECLARE_METHOD(t_SP3, containsSatellite, METH_O),
          DECLARE_METHOD(t_SP3, getEphemeris, METH_VARARGS),
          DECLARE_METHOD(t_SP3, getHeader, METH_NOARGS),
          DECLARE_METHOD(t_SP3, getSatelliteCount, METH_NOARGS),
          DECLARE_METHOD(t_SP3, getSatellites, METH_NOARGS),
          DECLARE_METHOD(t_SP3, splice, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3, validate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3)[] = {
          { Py_tp_methods, t_SP3__methods_ },
          { Py_tp_init, (void *) t_SP3_init_ },
          { Py_tp_getset, t_SP3__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3, t_SP3, SP3);

        void t_SP3::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3), &PY_TYPE_DEF(SP3), module, "SP3", 0);
        }

        void t_SP3::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3), "class_", make_descriptor(SP3::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3), "wrapfn_", make_descriptor(t_SP3::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SP3_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3::initializeClass, 1)))
            return NULL;
          return t_SP3::wrap_Object(SP3(((t_SP3 *) arg)->object.this$));
        }
        static PyObject *t_SP3_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3_init_(t_SP3 *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jint a1;
          ::org::orekit::frames::Frame a2((jobject) NULL);
          SP3 object((jobject) NULL);

          if (!parseArgs(args, "DIk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = SP3(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SP3_addSatellite(t_SP3 *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.addSatellite(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatellite", arg);
          return NULL;
        }

        static PyObject *t_SP3_containsSatellite(t_SP3 *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.containsSatellite(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "containsSatellite", arg);
          return NULL;
        }

        static PyObject *t_SP3_getEphemeris(t_SP3 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::files::sp3::SP3Ephemeris result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getEphemeris(a0));
                return ::org::orekit::files::sp3::t_SP3Ephemeris::wrap_Object(result);
              }
            }
            {
              jint a0;
              ::org::orekit::files::sp3::SP3Ephemeris result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.getEphemeris(a0));
                return ::org::orekit::files::sp3::t_SP3Ephemeris::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getEphemeris", args);
          return NULL;
        }

        static PyObject *t_SP3_getHeader(t_SP3 *self)
        {
          ::org::orekit::files::sp3::SP3Header result((jobject) NULL);
          OBJ_CALL(result = self->object.getHeader());
          return ::org::orekit::files::sp3::t_SP3Header::wrap_Object(result);
        }

        static PyObject *t_SP3_getSatelliteCount(t_SP3 *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSatelliteCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3_getSatellites(t_SP3 *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::sp3::PY_TYPE(SP3Ephemeris));
        }

        static PyObject *t_SP3_splice(PyTypeObject *type, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          SP3 result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3::splice(a0));
            return t_SP3::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "splice", arg);
          return NULL;
        }

        static PyObject *t_SP3_validate(t_SP3 *self, PyObject *args)
        {
          jboolean a0;
          ::java::lang::String a1((jobject) NULL);

          if (!parseArgs(args, "Zs", &a0, &a1))
          {
            OBJ_CALL(self->object.validate(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "validate", args);
          return NULL;
        }

        static PyObject *t_SP3_get__header(t_SP3 *self, void *data)
        {
          ::org::orekit::files::sp3::SP3Header value((jobject) NULL);
          OBJ_CALL(value = self->object.getHeader());
          return ::org::orekit::files::sp3::t_SP3Header::wrap_Object(value);
        }

        static PyObject *t_SP3_get__satelliteCount(t_SP3 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSatelliteCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SP3_get__satellites(t_SP3 *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$MeteorologicalConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$MeteorologicalConfiguration::mids$ = NULL;
        bool CRDConfiguration$MeteorologicalConfiguration::live$ = false;

        jclass CRDConfiguration$MeteorologicalConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getHumiSensorManufacturer_0090f7797e403f43] = env->getMethodID(cls, "getHumiSensorManufacturer", "()Ljava/lang/String;");
            mids$[mid_getHumiSensorModel_0090f7797e403f43] = env->getMethodID(cls, "getHumiSensorModel", "()Ljava/lang/String;");
            mids$[mid_getHumiSensorSerialNumber_0090f7797e403f43] = env->getMethodID(cls, "getHumiSensorSerialNumber", "()Ljava/lang/String;");
            mids$[mid_getMeteorologicalId_0090f7797e403f43] = env->getMethodID(cls, "getMeteorologicalId", "()Ljava/lang/String;");
            mids$[mid_getPressSensorManufacturer_0090f7797e403f43] = env->getMethodID(cls, "getPressSensorManufacturer", "()Ljava/lang/String;");
            mids$[mid_getPressSensorModel_0090f7797e403f43] = env->getMethodID(cls, "getPressSensorModel", "()Ljava/lang/String;");
            mids$[mid_getPressSensorSerialNumber_0090f7797e403f43] = env->getMethodID(cls, "getPressSensorSerialNumber", "()Ljava/lang/String;");
            mids$[mid_getTempSensorManufacturer_0090f7797e403f43] = env->getMethodID(cls, "getTempSensorManufacturer", "()Ljava/lang/String;");
            mids$[mid_getTempSensorModel_0090f7797e403f43] = env->getMethodID(cls, "getTempSensorModel", "()Ljava/lang/String;");
            mids$[mid_getTempSensorSerialNumber_0090f7797e403f43] = env->getMethodID(cls, "getTempSensorSerialNumber", "()Ljava/lang/String;");
            mids$[mid_setHumiSensorManufacturer_e939c6558ae8d313] = env->getMethodID(cls, "setHumiSensorManufacturer", "(Ljava/lang/String;)V");
            mids$[mid_setHumiSensorModel_e939c6558ae8d313] = env->getMethodID(cls, "setHumiSensorModel", "(Ljava/lang/String;)V");
            mids$[mid_setHumiSensorSerialNumber_e939c6558ae8d313] = env->getMethodID(cls, "setHumiSensorSerialNumber", "(Ljava/lang/String;)V");
            mids$[mid_setMeteorologicalId_e939c6558ae8d313] = env->getMethodID(cls, "setMeteorologicalId", "(Ljava/lang/String;)V");
            mids$[mid_setPressSensorManufacturer_e939c6558ae8d313] = env->getMethodID(cls, "setPressSensorManufacturer", "(Ljava/lang/String;)V");
            mids$[mid_setPressSensorModel_e939c6558ae8d313] = env->getMethodID(cls, "setPressSensorModel", "(Ljava/lang/String;)V");
            mids$[mid_setPressSensorSerialNumber_e939c6558ae8d313] = env->getMethodID(cls, "setPressSensorSerialNumber", "(Ljava/lang/String;)V");
            mids$[mid_setTempSensorManufacturer_e939c6558ae8d313] = env->getMethodID(cls, "setTempSensorManufacturer", "(Ljava/lang/String;)V");
            mids$[mid_setTempSensorModel_e939c6558ae8d313] = env->getMethodID(cls, "setTempSensorModel", "(Ljava/lang/String;)V");
            mids$[mid_setTempSensorSerialNumber_e939c6558ae8d313] = env->getMethodID(cls, "setTempSensorSerialNumber", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_0090f7797e403f43] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$MeteorologicalConfiguration::CRDConfiguration$MeteorologicalConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getHumiSensorManufacturer() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHumiSensorManufacturer_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getHumiSensorModel() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHumiSensorModel_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getHumiSensorSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHumiSensorSerialNumber_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getMeteorologicalId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMeteorologicalId_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getPressSensorManufacturer() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPressSensorManufacturer_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getPressSensorModel() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPressSensorModel_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getPressSensorSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPressSensorSerialNumber_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getTempSensorManufacturer() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTempSensorManufacturer_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getTempSensorModel() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTempSensorModel_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getTempSensorSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTempSensorSerialNumber_0090f7797e403f43]));
        }

        void CRDConfiguration$MeteorologicalConfiguration::setHumiSensorManufacturer(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setHumiSensorManufacturer_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setHumiSensorModel(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setHumiSensorModel_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setHumiSensorSerialNumber(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setHumiSensorSerialNumber_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setMeteorologicalId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMeteorologicalId_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setPressSensorManufacturer(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPressSensorManufacturer_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setPressSensorModel(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPressSensorModel_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setPressSensorSerialNumber(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPressSensorSerialNumber_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setTempSensorManufacturer(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTempSensorManufacturer_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setTempSensorModel(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTempSensorModel_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setTempSensorSerialNumber(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTempSensorSerialNumber_e939c6558ae8d313], a0.this$);
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
      namespace ilrs {
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$MeteorologicalConfiguration_init_(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getMeteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setMeteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_toCrdString(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_toString(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__meteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__meteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$MeteorologicalConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, humiSensorManufacturer),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, humiSensorModel),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, humiSensorSerialNumber),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, meteorologicalId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, pressSensorManufacturer),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, pressSensorModel),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, pressSensorSerialNumber),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, tempSensorManufacturer),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, tempSensorModel),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, tempSensorSerialNumber),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$MeteorologicalConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getHumiSensorManufacturer, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getHumiSensorModel, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getHumiSensorSerialNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getMeteorologicalId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getPressSensorManufacturer, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getPressSensorModel, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getPressSensorSerialNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getTempSensorManufacturer, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getTempSensorModel, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getTempSensorSerialNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setHumiSensorManufacturer, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setHumiSensorModel, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setHumiSensorSerialNumber, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setMeteorologicalId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setPressSensorManufacturer, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setPressSensorModel, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setPressSensorSerialNumber, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setTempSensorManufacturer, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setTempSensorModel, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setTempSensorSerialNumber, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$MeteorologicalConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$MeteorologicalConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$MeteorologicalConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$MeteorologicalConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$MeteorologicalConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$MeteorologicalConfiguration, t_CRDConfiguration$MeteorologicalConfiguration, CRDConfiguration$MeteorologicalConfiguration);

        void t_CRDConfiguration$MeteorologicalConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), &PY_TYPE_DEF(CRDConfiguration$MeteorologicalConfiguration), module, "CRDConfiguration$MeteorologicalConfiguration", 0);
        }

        void t_CRDConfiguration$MeteorologicalConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), "class_", make_descriptor(CRDConfiguration$MeteorologicalConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$MeteorologicalConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$MeteorologicalConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$MeteorologicalConfiguration::wrap_Object(CRDConfiguration$MeteorologicalConfiguration(((t_CRDConfiguration$MeteorologicalConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$MeteorologicalConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$MeteorologicalConfiguration_init_(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$MeteorologicalConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$MeteorologicalConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getHumiSensorManufacturer());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getHumiSensorModel());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getHumiSensorSerialNumber());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getMeteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeteorologicalId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getPressSensorManufacturer());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getPressSensorModel());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getPressSensorSerialNumber());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTempSensorManufacturer());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTempSensorModel());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTempSensorSerialNumber());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setHumiSensorManufacturer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setHumiSensorManufacturer", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setHumiSensorModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setHumiSensorModel", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setHumiSensorSerialNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setHumiSensorSerialNumber", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setMeteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setMeteorologicalId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMeteorologicalId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setPressSensorManufacturer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPressSensorManufacturer", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setPressSensorModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPressSensorModel", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setPressSensorSerialNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPressSensorSerialNumber", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTempSensorManufacturer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTempSensorManufacturer", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTempSensorModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTempSensorModel", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTempSensorSerialNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTempSensorSerialNumber", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_toCrdString(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_toString(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getHumiSensorManufacturer());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setHumiSensorManufacturer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "humiSensorManufacturer", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getHumiSensorModel());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setHumiSensorModel(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "humiSensorModel", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getHumiSensorSerialNumber());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setHumiSensorSerialNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "humiSensorSerialNumber", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__meteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeteorologicalId());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__meteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setMeteorologicalId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "meteorologicalId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getPressSensorManufacturer());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setPressSensorManufacturer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pressSensorManufacturer", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getPressSensorModel());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setPressSensorModel(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pressSensorModel", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getPressSensorSerialNumber());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setPressSensorSerialNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pressSensorSerialNumber", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTempSensorManufacturer());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTempSensorManufacturer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "tempSensorManufacturer", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTempSensorModel());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTempSensorModel(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "tempSensorModel", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTempSensorSerialNumber());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTempSensorSerialNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "tempSensorSerialNumber", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldGammaMnsFunction.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldGammaMnsFunction::class$ = NULL;
            jmethodID *FieldGammaMnsFunction::mids$ = NULL;
            bool FieldGammaMnsFunction::live$ = false;

            jclass FieldGammaMnsFunction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldGammaMnsFunction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_057062eab7827a87] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/Field;)V");
                mids$[mid_getDerivative_02688424bbdad522] = env->getMethodID(cls, "getDerivative", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getValue_02688424bbdad522] = env->getMethodID(cls, "getValue", "(III)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldGammaMnsFunction::FieldGammaMnsFunction(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, jint a2, const ::org::hipparchus::Field & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_057062eab7827a87, a0, a1.this$, a2, a3.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldGammaMnsFunction::getDerivative(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_02688424bbdad522], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGammaMnsFunction::getValue(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_02688424bbdad522], a0, a1, a2));
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
            static PyObject *t_FieldGammaMnsFunction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGammaMnsFunction_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGammaMnsFunction_of_(t_FieldGammaMnsFunction *self, PyObject *args);
            static int t_FieldGammaMnsFunction_init_(t_FieldGammaMnsFunction *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldGammaMnsFunction_getDerivative(t_FieldGammaMnsFunction *self, PyObject *args);
            static PyObject *t_FieldGammaMnsFunction_getValue(t_FieldGammaMnsFunction *self, PyObject *args);
            static PyObject *t_FieldGammaMnsFunction_get__parameters_(t_FieldGammaMnsFunction *self, void *data);
            static PyGetSetDef t_FieldGammaMnsFunction__fields_[] = {
              DECLARE_GET_FIELD(t_FieldGammaMnsFunction, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldGammaMnsFunction__methods_[] = {
              DECLARE_METHOD(t_FieldGammaMnsFunction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGammaMnsFunction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGammaMnsFunction, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldGammaMnsFunction, getDerivative, METH_VARARGS),
              DECLARE_METHOD(t_FieldGammaMnsFunction, getValue, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldGammaMnsFunction)[] = {
              { Py_tp_methods, t_FieldGammaMnsFunction__methods_ },
              { Py_tp_init, (void *) t_FieldGammaMnsFunction_init_ },
              { Py_tp_getset, t_FieldGammaMnsFunction__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldGammaMnsFunction)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldGammaMnsFunction, t_FieldGammaMnsFunction, FieldGammaMnsFunction);
            PyObject *t_FieldGammaMnsFunction::wrap_Object(const FieldGammaMnsFunction& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGammaMnsFunction::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGammaMnsFunction *self = (t_FieldGammaMnsFunction *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldGammaMnsFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGammaMnsFunction::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGammaMnsFunction *self = (t_FieldGammaMnsFunction *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldGammaMnsFunction::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldGammaMnsFunction), &PY_TYPE_DEF(FieldGammaMnsFunction), module, "FieldGammaMnsFunction", 0);
            }

            void t_FieldGammaMnsFunction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGammaMnsFunction), "class_", make_descriptor(FieldGammaMnsFunction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGammaMnsFunction), "wrapfn_", make_descriptor(t_FieldGammaMnsFunction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGammaMnsFunction), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldGammaMnsFunction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldGammaMnsFunction::initializeClass, 1)))
                return NULL;
              return t_FieldGammaMnsFunction::wrap_Object(FieldGammaMnsFunction(((t_FieldGammaMnsFunction *) arg)->object.this$));
            }
            static PyObject *t_FieldGammaMnsFunction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldGammaMnsFunction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldGammaMnsFunction_of_(t_FieldGammaMnsFunction *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldGammaMnsFunction_init_(t_FieldGammaMnsFunction *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::hipparchus::Field a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGammaMnsFunction object((jobject) NULL);

              if (!parseArgs(args, "IKIK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldGammaMnsFunction(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldGammaMnsFunction_getDerivative(t_FieldGammaMnsFunction *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getDerivative(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
              return NULL;
            }

            static PyObject *t_FieldGammaMnsFunction_getValue(t_FieldGammaMnsFunction *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getValue(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getValue", args);
              return NULL;
            }
            static PyObject *t_FieldGammaMnsFunction_get__parameters_(t_FieldGammaMnsFunction *self, void *data)
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
#include "org/orekit/attitudes/BodyCenterPointing.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/Ellipsoid.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
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
          mids$[mid_init$_a50bbae75e449f8b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/bodies/Ellipsoid;)V");
          mids$[mid_getTargetPV_99b96e260ceb5fe3] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getTargetPV_ab0341569f219f18] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BodyCenterPointing::BodyCenterPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::bodies::Ellipsoid & a1) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_a50bbae75e449f8b, a0.this$, a1.this$)) {}

      ::org::orekit::utils::TimeStampedFieldPVCoordinates BodyCenterPointing::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_99b96e260ceb5fe3], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates BodyCenterPointing::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_ab0341569f219f18], a0.this$, a1.this$, a2.this$));
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
#include "org/orekit/estimation/measurements/GroundReceiverCommonParametersWithDerivatives.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/frames/FieldTransform.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *GroundReceiverCommonParametersWithDerivatives::class$ = NULL;
        jmethodID *GroundReceiverCommonParametersWithDerivatives::mids$ = NULL;
        bool GroundReceiverCommonParametersWithDerivatives::live$ = false;

        jclass GroundReceiverCommonParametersWithDerivatives::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/GroundReceiverCommonParametersWithDerivatives");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c9c35894bdb8cda2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Ljava/util/Map;Lorg/orekit/frames/FieldTransform;Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)V");
            mids$[mid_getIndices_d6753b7055940a54] = env->getMethodID(cls, "getIndices", "()Ljava/util/Map;");
            mids$[mid_getOffsetToInertialDownlink_b8bdad2f73e0bf7c] = env->getMethodID(cls, "getOffsetToInertialDownlink", "()Lorg/orekit/frames/FieldTransform;");
            mids$[mid_getState_dd3e4a8d51055f1f] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getStationDownlink_26447a781aafdb9e] = env->getMethodID(cls, "getStationDownlink", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getTauD_4ed8e234724fadba] = env->getMethodID(cls, "getTauD", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getTransitPV_26447a781aafdb9e] = env->getMethodID(cls, "getTransitPV", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getTransitState_dd3e4a8d51055f1f] = env->getMethodID(cls, "getTransitState", "()Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundReceiverCommonParametersWithDerivatives::GroundReceiverCommonParametersWithDerivatives(const ::org::orekit::propagation::SpacecraftState & a0, const ::java::util::Map & a1, const ::org::orekit::frames::FieldTransform & a2, const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a3, const ::org::hipparchus::analysis::differentiation::Gradient & a4, const ::org::orekit::propagation::SpacecraftState & a5, const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c9c35894bdb8cda2, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        ::java::util::Map GroundReceiverCommonParametersWithDerivatives::getIndices() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getIndices_d6753b7055940a54]));
        }

        ::org::orekit::frames::FieldTransform GroundReceiverCommonParametersWithDerivatives::getOffsetToInertialDownlink() const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertialDownlink_b8bdad2f73e0bf7c]));
        }

        ::org::orekit::propagation::SpacecraftState GroundReceiverCommonParametersWithDerivatives::getState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_dd3e4a8d51055f1f]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates GroundReceiverCommonParametersWithDerivatives::getStationDownlink() const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getStationDownlink_26447a781aafdb9e]));
        }

        ::org::hipparchus::analysis::differentiation::Gradient GroundReceiverCommonParametersWithDerivatives::getTauD() const
        {
          return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getTauD_4ed8e234724fadba]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates GroundReceiverCommonParametersWithDerivatives::getTransitPV() const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTransitPV_26447a781aafdb9e]));
        }

        ::org::orekit::propagation::SpacecraftState GroundReceiverCommonParametersWithDerivatives::getTransitState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getTransitState_dd3e4a8d51055f1f]));
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
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GroundReceiverCommonParametersWithDerivatives_init_(t_GroundReceiverCommonParametersWithDerivatives *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getIndices(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getOffsetToInertialDownlink(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getState(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getStationDownlink(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTauD(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTransitPV(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTransitState(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__indices(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__offsetToInertialDownlink(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__state(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__stationDownlink(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__tauD(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__transitPV(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__transitState(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyGetSetDef t_GroundReceiverCommonParametersWithDerivatives__fields_[] = {
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, indices),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, offsetToInertialDownlink),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, state),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, stationDownlink),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, tauD),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, transitPV),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, transitState),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundReceiverCommonParametersWithDerivatives__methods_[] = {
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getIndices, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getOffsetToInertialDownlink, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getState, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getStationDownlink, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getTauD, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getTransitPV, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getTransitState, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundReceiverCommonParametersWithDerivatives)[] = {
          { Py_tp_methods, t_GroundReceiverCommonParametersWithDerivatives__methods_ },
          { Py_tp_init, (void *) t_GroundReceiverCommonParametersWithDerivatives_init_ },
          { Py_tp_getset, t_GroundReceiverCommonParametersWithDerivatives__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundReceiverCommonParametersWithDerivatives)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GroundReceiverCommonParametersWithDerivatives, t_GroundReceiverCommonParametersWithDerivatives, GroundReceiverCommonParametersWithDerivatives);

        void t_GroundReceiverCommonParametersWithDerivatives::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundReceiverCommonParametersWithDerivatives), &PY_TYPE_DEF(GroundReceiverCommonParametersWithDerivatives), module, "GroundReceiverCommonParametersWithDerivatives", 0);
        }

        void t_GroundReceiverCommonParametersWithDerivatives::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverCommonParametersWithDerivatives), "class_", make_descriptor(GroundReceiverCommonParametersWithDerivatives::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverCommonParametersWithDerivatives), "wrapfn_", make_descriptor(t_GroundReceiverCommonParametersWithDerivatives::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverCommonParametersWithDerivatives), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundReceiverCommonParametersWithDerivatives::initializeClass, 1)))
            return NULL;
          return t_GroundReceiverCommonParametersWithDerivatives::wrap_Object(GroundReceiverCommonParametersWithDerivatives(((t_GroundReceiverCommonParametersWithDerivatives *) arg)->object.this$));
        }
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundReceiverCommonParametersWithDerivatives::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GroundReceiverCommonParametersWithDerivatives_init_(t_GroundReceiverCommonParametersWithDerivatives *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::java::util::Map a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::frames::FieldTransform a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::utils::TimeStampedFieldPVCoordinates a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::analysis::differentiation::Gradient a4((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a5((jobject) NULL);
          ::org::orekit::utils::TimeStampedFieldPVCoordinates a6((jobject) NULL);
          PyTypeObject **p6;
          GroundReceiverCommonParametersWithDerivatives object((jobject) NULL);

          if (!parseArgs(args, "kKKKkkK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::java::util::Map::initializeClass, ::org::orekit::frames::FieldTransform::initializeClass, ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_, &a2, &p2, ::org::orekit::frames::t_FieldTransform::parameters_, &a3, &p3, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a4, &a5, &a6, &p6, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
          {
            INT_CALL(object = GroundReceiverCommonParametersWithDerivatives(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getIndices(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getIndices());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(Integer));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getOffsetToInertialDownlink(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::frames::FieldTransform result((jobject) NULL);
          OBJ_CALL(result = self->object.getOffsetToInertialDownlink());
          return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getState(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getStationDownlink(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);
          OBJ_CALL(result = self->object.getStationDownlink());
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTauD(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getTauD());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTransitPV(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);
          OBJ_CALL(result = self->object.getTransitPV());
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTransitState(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getTransitState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__indices(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getIndices());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__offsetToInertialDownlink(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::frames::FieldTransform value((jobject) NULL);
          OBJ_CALL(value = self->object.getOffsetToInertialDownlink());
          return ::org::orekit::frames::t_FieldTransform::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__state(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__stationDownlink(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
          OBJ_CALL(value = self->object.getStationDownlink());
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__tauD(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::Gradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getTauD());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__transitPV(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
          OBJ_CALL(value = self->object.getTransitPV());
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__transitState(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getTransitState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/ClassicalRungeKuttaIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *ClassicalRungeKuttaIntegratorBuilder::class$ = NULL;
        jmethodID *ClassicalRungeKuttaIntegratorBuilder::mids$ = NULL;
        bool ClassicalRungeKuttaIntegratorBuilder::live$ = false;

        jclass ClassicalRungeKuttaIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ClassicalRungeKuttaIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_501b0015ccc7d54e] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ClassicalRungeKuttaIntegratorBuilder::ClassicalRungeKuttaIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator ClassicalRungeKuttaIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_501b0015ccc7d54e], a0.this$, a1.this$));
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
        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ClassicalRungeKuttaIntegratorBuilder_init_(t_ClassicalRungeKuttaIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_buildIntegrator(t_ClassicalRungeKuttaIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_ClassicalRungeKuttaIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ClassicalRungeKuttaIntegratorBuilder)[] = {
          { Py_tp_methods, t_ClassicalRungeKuttaIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_ClassicalRungeKuttaIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ClassicalRungeKuttaIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ClassicalRungeKuttaIntegratorBuilder, t_ClassicalRungeKuttaIntegratorBuilder, ClassicalRungeKuttaIntegratorBuilder);

        void t_ClassicalRungeKuttaIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ClassicalRungeKuttaIntegratorBuilder), &PY_TYPE_DEF(ClassicalRungeKuttaIntegratorBuilder), module, "ClassicalRungeKuttaIntegratorBuilder", 0);
        }

        void t_ClassicalRungeKuttaIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegratorBuilder), "class_", make_descriptor(ClassicalRungeKuttaIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegratorBuilder), "wrapfn_", make_descriptor(t_ClassicalRungeKuttaIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ClassicalRungeKuttaIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ClassicalRungeKuttaIntegratorBuilder::wrap_Object(ClassicalRungeKuttaIntegratorBuilder(((t_ClassicalRungeKuttaIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ClassicalRungeKuttaIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ClassicalRungeKuttaIntegratorBuilder_init_(t_ClassicalRungeKuttaIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ClassicalRungeKuttaIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ClassicalRungeKuttaIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_buildIntegrator(t_ClassicalRungeKuttaIntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/PythonAbstractAnalyticalPropagator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *PythonAbstractAnalyticalPropagator::class$ = NULL;
        jmethodID *PythonAbstractAnalyticalPropagator::mids$ = NULL;
        bool PythonAbstractAnalyticalPropagator::live$ = false;

        jclass PythonAbstractAnalyticalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/PythonAbstractAnalyticalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8109c1a27d4471d3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getMass_e912d21057defe63] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_propagateOrbit_6f58641238e8a9c4] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_resetIntermediateState_9658cf3eaef14ef5] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractAnalyticalPropagator::PythonAbstractAnalyticalPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_8109c1a27d4471d3, a0.this$)) {}

        void PythonAbstractAnalyticalPropagator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonAbstractAnalyticalPropagator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonAbstractAnalyticalPropagator::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      namespace analytical {
        static PyObject *t_PythonAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractAnalyticalPropagator_init_(t_PythonAbstractAnalyticalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractAnalyticalPropagator_finalize(t_PythonAbstractAnalyticalPropagator *self);
        static PyObject *t_PythonAbstractAnalyticalPropagator_pythonExtension(t_PythonAbstractAnalyticalPropagator *self, PyObject *args);
        static jdouble JNICALL t_PythonAbstractAnalyticalPropagator_getMass0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractAnalyticalPropagator_propagateOrbit1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractAnalyticalPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractAnalyticalPropagator_resetIntermediateState3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
        static PyObject *t_PythonAbstractAnalyticalPropagator_get__self(t_PythonAbstractAnalyticalPropagator *self, void *data);
        static PyGetSetDef t_PythonAbstractAnalyticalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractAnalyticalPropagator, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractAnalyticalPropagator__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractAnalyticalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalPropagator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalPropagator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractAnalyticalPropagator)[] = {
          { Py_tp_methods, t_PythonAbstractAnalyticalPropagator__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractAnalyticalPropagator_init_ },
          { Py_tp_getset, t_PythonAbstractAnalyticalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractAnalyticalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(PythonAbstractAnalyticalPropagator, t_PythonAbstractAnalyticalPropagator, PythonAbstractAnalyticalPropagator);

        void t_PythonAbstractAnalyticalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractAnalyticalPropagator), &PY_TYPE_DEF(PythonAbstractAnalyticalPropagator), module, "PythonAbstractAnalyticalPropagator", 1);
        }

        void t_PythonAbstractAnalyticalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalPropagator), "class_", make_descriptor(PythonAbstractAnalyticalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalPropagator), "wrapfn_", make_descriptor(t_PythonAbstractAnalyticalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractAnalyticalPropagator::initializeClass);
          JNINativeMethod methods[] = {
            { "getMass", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractAnalyticalPropagator_getMass0 },
            { "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;", (void *) t_PythonAbstractAnalyticalPropagator_propagateOrbit1 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractAnalyticalPropagator_pythonDecRef2 },
            { "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V", (void *) t_PythonAbstractAnalyticalPropagator_resetIntermediateState3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractAnalyticalPropagator::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractAnalyticalPropagator::wrap_Object(PythonAbstractAnalyticalPropagator(((t_PythonAbstractAnalyticalPropagator *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractAnalyticalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractAnalyticalPropagator_init_(t_PythonAbstractAnalyticalPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
          PythonAbstractAnalyticalPropagator object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            INT_CALL(object = PythonAbstractAnalyticalPropagator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAbstractAnalyticalPropagator_finalize(t_PythonAbstractAnalyticalPropagator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractAnalyticalPropagator_pythonExtension(t_PythonAbstractAnalyticalPropagator *self, PyObject *args)
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

        static jdouble JNICALL t_PythonAbstractAnalyticalPropagator_getMass0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "getMass", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getMass", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonAbstractAnalyticalPropagator_propagateOrbit1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::Orbit value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "propagateOrbit", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::Orbit::initializeClass, &value))
          {
            throwTypeError("propagateOrbit", result);
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

        static void JNICALL t_PythonAbstractAnalyticalPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonAbstractAnalyticalPropagator_resetIntermediateState3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = (a1 ? Py_True : Py_False);
          PyObject *result = PyObject_CallMethod(obj, "resetIntermediateState", "OO", o0, o1);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonAbstractAnalyticalPropagator_get__self(t_PythonAbstractAnalyticalPropagator *self, void *data)
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PropagatorsParallelizer.h"
#include "java/util/List.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/propagation/sampling/MultiSatStepHandler.h"
#include "org/orekit/propagation/sampling/MultiSatFixedStepHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PropagatorsParallelizer::class$ = NULL;
      jmethodID *PropagatorsParallelizer::mids$ = NULL;
      bool PropagatorsParallelizer::live$ = false;

      jclass PropagatorsParallelizer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PropagatorsParallelizer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_65de9727799c5641] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
          mids$[mid_init$_d41a4dd18aadc4fb] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/propagation/sampling/MultiSatStepHandler;)V");
          mids$[mid_init$_1750be9ae5566540] = env->getMethodID(cls, "<init>", "(Ljava/util/List;DLorg/orekit/propagation/sampling/MultiSatFixedStepHandler;)V");
          mids$[mid_getPropagators_a6156df500549a58] = env->getMethodID(cls, "getPropagators", "()Ljava/util/List;");
          mids$[mid_propagate_b7149ea6787a6f3c] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PropagatorsParallelizer::PropagatorsParallelizer(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_65de9727799c5641, a0.this$)) {}

      PropagatorsParallelizer::PropagatorsParallelizer(const ::java::util::List & a0, const ::org::orekit::propagation::sampling::MultiSatStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d41a4dd18aadc4fb, a0.this$, a1.this$)) {}

      PropagatorsParallelizer::PropagatorsParallelizer(const ::java::util::List & a0, jdouble a1, const ::org::orekit::propagation::sampling::MultiSatFixedStepHandler & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1750be9ae5566540, a0.this$, a1, a2.this$)) {}

      ::java::util::List PropagatorsParallelizer::getPropagators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPropagators_a6156df500549a58]));
      }

      ::java::util::List PropagatorsParallelizer::propagate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_propagate_b7149ea6787a6f3c], a0.this$, a1.this$));
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
      static PyObject *t_PropagatorsParallelizer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PropagatorsParallelizer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PropagatorsParallelizer_init_(t_PropagatorsParallelizer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PropagatorsParallelizer_getPropagators(t_PropagatorsParallelizer *self);
      static PyObject *t_PropagatorsParallelizer_propagate(t_PropagatorsParallelizer *self, PyObject *args);
      static PyObject *t_PropagatorsParallelizer_get__propagators(t_PropagatorsParallelizer *self, void *data);
      static PyGetSetDef t_PropagatorsParallelizer__fields_[] = {
        DECLARE_GET_FIELD(t_PropagatorsParallelizer, propagators),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PropagatorsParallelizer__methods_[] = {
        DECLARE_METHOD(t_PropagatorsParallelizer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PropagatorsParallelizer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PropagatorsParallelizer, getPropagators, METH_NOARGS),
        DECLARE_METHOD(t_PropagatorsParallelizer, propagate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PropagatorsParallelizer)[] = {
        { Py_tp_methods, t_PropagatorsParallelizer__methods_ },
        { Py_tp_init, (void *) t_PropagatorsParallelizer_init_ },
        { Py_tp_getset, t_PropagatorsParallelizer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PropagatorsParallelizer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PropagatorsParallelizer, t_PropagatorsParallelizer, PropagatorsParallelizer);

      void t_PropagatorsParallelizer::install(PyObject *module)
      {
        installType(&PY_TYPE(PropagatorsParallelizer), &PY_TYPE_DEF(PropagatorsParallelizer), module, "PropagatorsParallelizer", 0);
      }

      void t_PropagatorsParallelizer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorsParallelizer), "class_", make_descriptor(PropagatorsParallelizer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorsParallelizer), "wrapfn_", make_descriptor(t_PropagatorsParallelizer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorsParallelizer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PropagatorsParallelizer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PropagatorsParallelizer::initializeClass, 1)))
          return NULL;
        return t_PropagatorsParallelizer::wrap_Object(PropagatorsParallelizer(((t_PropagatorsParallelizer *) arg)->object.this$));
      }
      static PyObject *t_PropagatorsParallelizer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PropagatorsParallelizer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PropagatorsParallelizer_init_(t_PropagatorsParallelizer *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            PropagatorsParallelizer object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = PropagatorsParallelizer(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::sampling::MultiSatStepHandler a1((jobject) NULL);
            PropagatorsParallelizer object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::org::orekit::propagation::sampling::MultiSatStepHandler::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
            {
              INT_CALL(object = PropagatorsParallelizer(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::propagation::sampling::MultiSatFixedStepHandler a2((jobject) NULL);
            PropagatorsParallelizer object((jobject) NULL);

            if (!parseArgs(args, "KDk", ::java::util::List::initializeClass, ::org::orekit::propagation::sampling::MultiSatFixedStepHandler::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
            {
              INT_CALL(object = PropagatorsParallelizer(a0, a1, a2));
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

      static PyObject *t_PropagatorsParallelizer_getPropagators(t_PropagatorsParallelizer *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPropagators());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(Propagator));
      }

      static PyObject *t_PropagatorsParallelizer_propagate(t_PropagatorsParallelizer *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.propagate(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(SpacecraftState));
        }

        PyErr_SetArgsError((PyObject *) self, "propagate", args);
        return NULL;
      }

      static PyObject *t_PropagatorsParallelizer_get__propagators(t_PropagatorsParallelizer *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPropagators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldForceModelContext.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldForceModelContext::class$ = NULL;
            jmethodID *FieldForceModelContext::mids$ = NULL;
            bool FieldForceModelContext::live$ = false;

            jclass FieldForceModelContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldForceModelContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getFieldAuxiliaryElements_bc5376485447a41f] = env->getMethodID(cls, "getFieldAuxiliaryElements", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements FieldForceModelContext::getFieldAuxiliaryElements() const
            {
              return ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements(env->callObjectMethod(this$, mids$[mid_getFieldAuxiliaryElements_bc5376485447a41f]));
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
          namespace forces {
            static PyObject *t_FieldForceModelContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldForceModelContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldForceModelContext_of_(t_FieldForceModelContext *self, PyObject *args);
            static PyObject *t_FieldForceModelContext_getFieldAuxiliaryElements(t_FieldForceModelContext *self);
            static PyObject *t_FieldForceModelContext_get__fieldAuxiliaryElements(t_FieldForceModelContext *self, void *data);
            static PyObject *t_FieldForceModelContext_get__parameters_(t_FieldForceModelContext *self, void *data);
            static PyGetSetDef t_FieldForceModelContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldForceModelContext, fieldAuxiliaryElements),
              DECLARE_GET_FIELD(t_FieldForceModelContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldForceModelContext__methods_[] = {
              DECLARE_METHOD(t_FieldForceModelContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldForceModelContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldForceModelContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldForceModelContext, getFieldAuxiliaryElements, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldForceModelContext)[] = {
              { Py_tp_methods, t_FieldForceModelContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldForceModelContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldForceModelContext)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldForceModelContext, t_FieldForceModelContext, FieldForceModelContext);
            PyObject *t_FieldForceModelContext::wrap_Object(const FieldForceModelContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldForceModelContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldForceModelContext *self = (t_FieldForceModelContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldForceModelContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldForceModelContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldForceModelContext *self = (t_FieldForceModelContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldForceModelContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldForceModelContext), &PY_TYPE_DEF(FieldForceModelContext), module, "FieldForceModelContext", 0);
            }

            void t_FieldForceModelContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldForceModelContext), "class_", make_descriptor(FieldForceModelContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldForceModelContext), "wrapfn_", make_descriptor(t_FieldForceModelContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldForceModelContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldForceModelContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldForceModelContext::initializeClass, 1)))
                return NULL;
              return t_FieldForceModelContext::wrap_Object(FieldForceModelContext(((t_FieldForceModelContext *) arg)->object.this$));
            }
            static PyObject *t_FieldForceModelContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldForceModelContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldForceModelContext_of_(t_FieldForceModelContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldForceModelContext_getFieldAuxiliaryElements(t_FieldForceModelContext *self)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements result((jobject) NULL);
              OBJ_CALL(result = self->object.getFieldAuxiliaryElements());
              return ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::wrap_Object(result, self->parameters[0]);
            }
            static PyObject *t_FieldForceModelContext_get__parameters_(t_FieldForceModelContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldForceModelContext_get__fieldAuxiliaryElements(t_FieldForceModelContext *self, void *data)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements value((jobject) NULL);
              OBJ_CALL(value = self->object.getFieldAuxiliaryElements());
              return ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/TimeScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *IRNSSScale::class$ = NULL;
      jmethodID *IRNSSScale::mids$ = NULL;
      bool IRNSSScale::live$ = false;

      jclass IRNSSScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/IRNSSScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_e912d21057defe63] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_7bc0fd76ee915b72] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_ceb6ee9e1c4bbdb1] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String IRNSSScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      jdouble IRNSSScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement IRNSSScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_7bc0fd76ee915b72], a0.this$));
      }

      jdouble IRNSSScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_ceb6ee9e1c4bbdb1], a0.this$, a1.this$);
      }

      ::java::lang::String IRNSSScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
      static PyObject *t_IRNSSScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IRNSSScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IRNSSScale_getName(t_IRNSSScale *self);
      static PyObject *t_IRNSSScale_offsetFromTAI(t_IRNSSScale *self, PyObject *args);
      static PyObject *t_IRNSSScale_offsetToTAI(t_IRNSSScale *self, PyObject *args);
      static PyObject *t_IRNSSScale_toString(t_IRNSSScale *self, PyObject *args);
      static PyObject *t_IRNSSScale_get__name(t_IRNSSScale *self, void *data);
      static PyGetSetDef t_IRNSSScale__fields_[] = {
        DECLARE_GET_FIELD(t_IRNSSScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IRNSSScale__methods_[] = {
        DECLARE_METHOD(t_IRNSSScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IRNSSScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IRNSSScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_IRNSSScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_IRNSSScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_IRNSSScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IRNSSScale)[] = {
        { Py_tp_methods, t_IRNSSScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_IRNSSScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IRNSSScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IRNSSScale, t_IRNSSScale, IRNSSScale);

      void t_IRNSSScale::install(PyObject *module)
      {
        installType(&PY_TYPE(IRNSSScale), &PY_TYPE_DEF(IRNSSScale), module, "IRNSSScale", 0);
      }

      void t_IRNSSScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSScale), "class_", make_descriptor(IRNSSScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSScale), "wrapfn_", make_descriptor(t_IRNSSScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IRNSSScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IRNSSScale::initializeClass, 1)))
          return NULL;
        return t_IRNSSScale::wrap_Object(IRNSSScale(((t_IRNSSScale *) arg)->object.this$));
      }
      static PyObject *t_IRNSSScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IRNSSScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IRNSSScale_getName(t_IRNSSScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_IRNSSScale_offsetFromTAI(t_IRNSSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_IRNSSScale_offsetToTAI(t_IRNSSScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_IRNSSScale_toString(t_IRNSSScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(IRNSSScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_IRNSSScale_get__name(t_IRNSSScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/SHMFormatReader.h"
#include "java/io/IOException.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/time/TimeScale.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "java/text/ParseException.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *SHMFormatReader::class$ = NULL;
          jmethodID *SHMFormatReader::mids$ = NULL;
          bool SHMFormatReader::live$ = false;

          jclass SHMFormatReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/SHMFormatReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d1dd1bdcf55f8f80] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_ead6ed0365e2cf97] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/time/TimeScale;)V");
              mids$[mid_getProvider_086897fc27688c23] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_ec60cb5f4b3de555] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SHMFormatReader::SHMFormatReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_d1dd1bdcf55f8f80, a0.this$, a1)) {}

          SHMFormatReader::SHMFormatReader(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_ead6ed0365e2cf97, a0.this$, a1, a2.this$)) {}

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider SHMFormatReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_086897fc27688c23], a0, a1, a2));
          }

          void SHMFormatReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_ec60cb5f4b3de555], a0.this$, a1.this$);
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
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_SHMFormatReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SHMFormatReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SHMFormatReader_init_(t_SHMFormatReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SHMFormatReader_getProvider(t_SHMFormatReader *self, PyObject *args);
          static PyObject *t_SHMFormatReader_loadData(t_SHMFormatReader *self, PyObject *args);

          static PyMethodDef t_SHMFormatReader__methods_[] = {
            DECLARE_METHOD(t_SHMFormatReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SHMFormatReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SHMFormatReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_SHMFormatReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SHMFormatReader)[] = {
            { Py_tp_methods, t_SHMFormatReader__methods_ },
            { Py_tp_init, (void *) t_SHMFormatReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SHMFormatReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(SHMFormatReader, t_SHMFormatReader, SHMFormatReader);

          void t_SHMFormatReader::install(PyObject *module)
          {
            installType(&PY_TYPE(SHMFormatReader), &PY_TYPE_DEF(SHMFormatReader), module, "SHMFormatReader", 0);
          }

          void t_SHMFormatReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SHMFormatReader), "class_", make_descriptor(SHMFormatReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SHMFormatReader), "wrapfn_", make_descriptor(t_SHMFormatReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SHMFormatReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SHMFormatReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SHMFormatReader::initializeClass, 1)))
              return NULL;
            return t_SHMFormatReader::wrap_Object(SHMFormatReader(((t_SHMFormatReader *) arg)->object.this$));
          }
          static PyObject *t_SHMFormatReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SHMFormatReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SHMFormatReader_init_(t_SHMFormatReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                SHMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = SHMFormatReader(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                SHMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = SHMFormatReader(a0, a1, a2));
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

          static PyObject *t_SHMFormatReader_getProvider(t_SHMFormatReader *self, PyObject *args)
          {
            jboolean a0;
            jint a1;
            jint a2;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "ZII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_RawSphericalHarmonicsProvider::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SHMFormatReader), (PyObject *) self, "getProvider", args, 2);
          }

          static PyObject *t_SHMFormatReader_loadData(t_SHMFormatReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SHMFormatReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/LoessInterpolator.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *LoessInterpolator::class$ = NULL;
        jmethodID *LoessInterpolator::mids$ = NULL;
        bool LoessInterpolator::live$ = false;
        jdouble LoessInterpolator::DEFAULT_ACCURACY = (jdouble) 0;
        jdouble LoessInterpolator::DEFAULT_BANDWIDTH = (jdouble) 0;
        jint LoessInterpolator::DEFAULT_ROBUSTNESS_ITERS = (jint) 0;

        jclass LoessInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/LoessInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_18b1ce6f78e2ded3] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_init$_4de8786c851b2321] = env->getMethodID(cls, "<init>", "(DID)V");
            mids$[mid_interpolate_d587810b458fa2cb] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_smooth_0f29b7d9f77b462e] = env->getMethodID(cls, "smooth", "([D[D)[D");
            mids$[mid_smooth_6a01665d7abd00ff] = env->getMethodID(cls, "smooth", "([D[D[D)[D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ACCURACY = env->getStaticDoubleField(cls, "DEFAULT_ACCURACY");
            DEFAULT_BANDWIDTH = env->getStaticDoubleField(cls, "DEFAULT_BANDWIDTH");
            DEFAULT_ROBUSTNESS_ITERS = env->getStaticIntField(cls, "DEFAULT_ROBUSTNESS_ITERS");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LoessInterpolator::LoessInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        LoessInterpolator::LoessInterpolator(jdouble a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_18b1ce6f78e2ded3, a0, a1)) {}

        LoessInterpolator::LoessInterpolator(jdouble a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4de8786c851b2321, a0, a1, a2)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction LoessInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_d587810b458fa2cb], a0.this$, a1.this$));
        }

        JArray< jdouble > LoessInterpolator::smooth(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_smooth_0f29b7d9f77b462e], a0.this$, a1.this$));
        }

        JArray< jdouble > LoessInterpolator::smooth(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_smooth_6a01665d7abd00ff], a0.this$, a1.this$, a2.this$));
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
      namespace interpolation {
        static PyObject *t_LoessInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LoessInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LoessInterpolator_init_(t_LoessInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LoessInterpolator_interpolate(t_LoessInterpolator *self, PyObject *args);
        static PyObject *t_LoessInterpolator_smooth(t_LoessInterpolator *self, PyObject *args);

        static PyMethodDef t_LoessInterpolator__methods_[] = {
          DECLARE_METHOD(t_LoessInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LoessInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LoessInterpolator, interpolate, METH_VARARGS),
          DECLARE_METHOD(t_LoessInterpolator, smooth, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LoessInterpolator)[] = {
          { Py_tp_methods, t_LoessInterpolator__methods_ },
          { Py_tp_init, (void *) t_LoessInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LoessInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LoessInterpolator, t_LoessInterpolator, LoessInterpolator);

        void t_LoessInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(LoessInterpolator), &PY_TYPE_DEF(LoessInterpolator), module, "LoessInterpolator", 0);
        }

        void t_LoessInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "class_", make_descriptor(LoessInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "wrapfn_", make_descriptor(t_LoessInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "boxfn_", make_descriptor(boxObject));
          env->getClass(LoessInterpolator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "DEFAULT_ACCURACY", make_descriptor(LoessInterpolator::DEFAULT_ACCURACY));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "DEFAULT_BANDWIDTH", make_descriptor(LoessInterpolator::DEFAULT_BANDWIDTH));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "DEFAULT_ROBUSTNESS_ITERS", make_descriptor(LoessInterpolator::DEFAULT_ROBUSTNESS_ITERS));
        }

        static PyObject *t_LoessInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LoessInterpolator::initializeClass, 1)))
            return NULL;
          return t_LoessInterpolator::wrap_Object(LoessInterpolator(((t_LoessInterpolator *) arg)->object.this$));
        }
        static PyObject *t_LoessInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LoessInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LoessInterpolator_init_(t_LoessInterpolator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              LoessInterpolator object((jobject) NULL);

              INT_CALL(object = LoessInterpolator());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jint a1;
              LoessInterpolator object((jobject) NULL);

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                INT_CALL(object = LoessInterpolator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jint a1;
              jdouble a2;
              LoessInterpolator object((jobject) NULL);

              if (!parseArgs(args, "DID", &a0, &a1, &a2))
              {
                INT_CALL(object = LoessInterpolator(a0, a1, a2));
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

        static PyObject *t_LoessInterpolator_interpolate(t_LoessInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialSplineFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }

        static PyObject *t_LoessInterpolator_smooth(t_LoessInterpolator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.smooth(a0, a1));
                return result.wrap();
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[D[D[D", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.smooth(a0, a1, a2));
                return result.wrap();
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "smooth", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/HelmertTransformation.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *HelmertTransformation::class$ = NULL;
      jmethodID *HelmertTransformation::mids$ = NULL;
      bool HelmertTransformation::live$ = false;

      jclass HelmertTransformation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/HelmertTransformation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_dbe7ce1323037723] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDDDDDDDDDD)V");
          mids$[mid_getEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getStaticTransform_96493aacdf1acda1] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_490485462b5938a0] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_d55545a64ea4a9a7] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_0b4f24249033b631] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HelmertTransformation::HelmertTransformation(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dbe7ce1323037723, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12)) {}

      ::org::orekit::time::AbsoluteDate HelmertTransformation::getEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::frames::StaticTransform HelmertTransformation::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_96493aacdf1acda1], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform HelmertTransformation::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_490485462b5938a0], a0.this$));
      }

      ::org::orekit::frames::Transform HelmertTransformation::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_d55545a64ea4a9a7], a0.this$));
      }

      ::org::orekit::frames::FieldTransform HelmertTransformation::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_0b4f24249033b631], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/frames/HelmertTransformation$Predefined.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_HelmertTransformation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HelmertTransformation_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HelmertTransformation_init_(t_HelmertTransformation *self, PyObject *args, PyObject *kwds);
      static PyObject *t_HelmertTransformation_getEpoch(t_HelmertTransformation *self);
      static PyObject *t_HelmertTransformation_getStaticTransform(t_HelmertTransformation *self, PyObject *args);
      static PyObject *t_HelmertTransformation_getTransform(t_HelmertTransformation *self, PyObject *args);
      static PyObject *t_HelmertTransformation_get__epoch(t_HelmertTransformation *self, void *data);
      static PyGetSetDef t_HelmertTransformation__fields_[] = {
        DECLARE_GET_FIELD(t_HelmertTransformation, epoch),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_HelmertTransformation__methods_[] = {
        DECLARE_METHOD(t_HelmertTransformation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation, getEpoch, METH_NOARGS),
        DECLARE_METHOD(t_HelmertTransformation, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_HelmertTransformation, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HelmertTransformation)[] = {
        { Py_tp_methods, t_HelmertTransformation__methods_ },
        { Py_tp_init, (void *) t_HelmertTransformation_init_ },
        { Py_tp_getset, t_HelmertTransformation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HelmertTransformation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(HelmertTransformation, t_HelmertTransformation, HelmertTransformation);

      void t_HelmertTransformation::install(PyObject *module)
      {
        installType(&PY_TYPE(HelmertTransformation), &PY_TYPE_DEF(HelmertTransformation), module, "HelmertTransformation", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation), "Predefined", make_descriptor(&PY_TYPE_DEF(HelmertTransformation$Predefined)));
      }

      void t_HelmertTransformation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation), "class_", make_descriptor(HelmertTransformation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation), "wrapfn_", make_descriptor(t_HelmertTransformation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HelmertTransformation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HelmertTransformation::initializeClass, 1)))
          return NULL;
        return t_HelmertTransformation::wrap_Object(HelmertTransformation(((t_HelmertTransformation *) arg)->object.this$));
      }
      static PyObject *t_HelmertTransformation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HelmertTransformation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HelmertTransformation_init_(t_HelmertTransformation *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        jdouble a7;
        jdouble a8;
        jdouble a9;
        jdouble a10;
        jdouble a11;
        jdouble a12;
        HelmertTransformation object((jobject) NULL);

        if (!parseArgs(args, "kDDDDDDDDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12))
        {
          INT_CALL(object = HelmertTransformation(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_HelmertTransformation_getEpoch(t_HelmertTransformation *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_HelmertTransformation_getStaticTransform(t_HelmertTransformation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_HelmertTransformation_getTransform(t_HelmertTransformation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }

      static PyObject *t_HelmertTransformation_get__epoch(t_HelmertTransformation *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/SecantSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *SecantSolver::class$ = NULL;
        jmethodID *SecantSolver::mids$ = NULL;
        bool SecantSolver::live$ = false;

        jclass SecantSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/SecantSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_doSolve_456d9a2f64d6b28d] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SecantSolver::SecantSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        SecantSolver::SecantSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        SecantSolver::SecantSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}
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
      namespace solvers {
        static PyObject *t_SecantSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SecantSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SecantSolver_of_(t_SecantSolver *self, PyObject *args);
        static int t_SecantSolver_init_(t_SecantSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SecantSolver_get__parameters_(t_SecantSolver *self, void *data);
        static PyGetSetDef t_SecantSolver__fields_[] = {
          DECLARE_GET_FIELD(t_SecantSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SecantSolver__methods_[] = {
          DECLARE_METHOD(t_SecantSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SecantSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SecantSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SecantSolver)[] = {
          { Py_tp_methods, t_SecantSolver__methods_ },
          { Py_tp_init, (void *) t_SecantSolver_init_ },
          { Py_tp_getset, t_SecantSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SecantSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(SecantSolver, t_SecantSolver, SecantSolver);
        PyObject *t_SecantSolver::wrap_Object(const SecantSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SecantSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SecantSolver *self = (t_SecantSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SecantSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SecantSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SecantSolver *self = (t_SecantSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SecantSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(SecantSolver), &PY_TYPE_DEF(SecantSolver), module, "SecantSolver", 0);
        }

        void t_SecantSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SecantSolver), "class_", make_descriptor(SecantSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SecantSolver), "wrapfn_", make_descriptor(t_SecantSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SecantSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SecantSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SecantSolver::initializeClass, 1)))
            return NULL;
          return t_SecantSolver::wrap_Object(SecantSolver(((t_SecantSolver *) arg)->object.this$));
        }
        static PyObject *t_SecantSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SecantSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SecantSolver_of_(t_SecantSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_SecantSolver_init_(t_SecantSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SecantSolver object((jobject) NULL);

              INT_CALL(object = SecantSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              SecantSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = SecantSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              SecantSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = SecantSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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
        static PyObject *t_SecantSolver_get__parameters_(t_SecantSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/clock/RinexClock$ReferenceClock.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock$ReferenceClock::class$ = NULL;
          jmethodID *RinexClock$ReferenceClock::mids$ = NULL;
          bool RinexClock$ReferenceClock::live$ = false;

          jclass RinexClock$ReferenceClock::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock$ReferenceClock");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_403b729c294d7c0d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_getClockConstraint_456d9a2f64d6b28d] = env->getMethodID(cls, "getClockConstraint", "()D");
              mids$[mid_getClockID_0090f7797e403f43] = env->getMethodID(cls, "getClockID", "()Ljava/lang/String;");
              mids$[mid_getEndDate_aaa854c403487cf3] = env->getMethodID(cls, "getEndDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getReferenceName_0090f7797e403f43] = env->getMethodID(cls, "getReferenceName", "()Ljava/lang/String;");
              mids$[mid_getStartDate_aaa854c403487cf3] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexClock$ReferenceClock::RinexClock$ReferenceClock(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::time::AbsoluteDate & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_403b729c294d7c0d, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

          jdouble RinexClock$ReferenceClock::getClockConstraint() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockConstraint_456d9a2f64d6b28d]);
          }

          ::java::lang::String RinexClock$ReferenceClock::getClockID() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClockID_0090f7797e403f43]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock$ReferenceClock::getEndDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_aaa854c403487cf3]));
          }

          ::java::lang::String RinexClock$ReferenceClock::getReferenceName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReferenceName_0090f7797e403f43]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock$ReferenceClock::getStartDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartDate_aaa854c403487cf3]));
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
      namespace rinex {
        namespace clock {
          static PyObject *t_RinexClock$ReferenceClock_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ReferenceClock_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexClock$ReferenceClock_init_(t_RinexClock$ReferenceClock *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexClock$ReferenceClock_getClockConstraint(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_getClockID(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_getEndDate(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_getReferenceName(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_getStartDate(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_get__clockConstraint(t_RinexClock$ReferenceClock *self, void *data);
          static PyObject *t_RinexClock$ReferenceClock_get__clockID(t_RinexClock$ReferenceClock *self, void *data);
          static PyObject *t_RinexClock$ReferenceClock_get__endDate(t_RinexClock$ReferenceClock *self, void *data);
          static PyObject *t_RinexClock$ReferenceClock_get__referenceName(t_RinexClock$ReferenceClock *self, void *data);
          static PyObject *t_RinexClock$ReferenceClock_get__startDate(t_RinexClock$ReferenceClock *self, void *data);
          static PyGetSetDef t_RinexClock$ReferenceClock__fields_[] = {
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, clockConstraint),
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, clockID),
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, endDate),
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, referenceName),
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, startDate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock$ReferenceClock__methods_[] = {
            DECLARE_METHOD(t_RinexClock$ReferenceClock, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getClockConstraint, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getClockID, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getEndDate, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getReferenceName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getStartDate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock$ReferenceClock)[] = {
            { Py_tp_methods, t_RinexClock$ReferenceClock__methods_ },
            { Py_tp_init, (void *) t_RinexClock$ReferenceClock_init_ },
            { Py_tp_getset, t_RinexClock$ReferenceClock__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock$ReferenceClock)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClock$ReferenceClock, t_RinexClock$ReferenceClock, RinexClock$ReferenceClock);

          void t_RinexClock$ReferenceClock::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock$ReferenceClock), &PY_TYPE_DEF(RinexClock$ReferenceClock), module, "RinexClock$ReferenceClock", 0);
          }

          void t_RinexClock$ReferenceClock::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ReferenceClock), "class_", make_descriptor(RinexClock$ReferenceClock::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ReferenceClock), "wrapfn_", make_descriptor(t_RinexClock$ReferenceClock::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ReferenceClock), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClock$ReferenceClock_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock$ReferenceClock::initializeClass, 1)))
              return NULL;
            return t_RinexClock$ReferenceClock::wrap_Object(RinexClock$ReferenceClock(((t_RinexClock$ReferenceClock *) arg)->object.this$));
          }
          static PyObject *t_RinexClock$ReferenceClock_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock$ReferenceClock::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexClock$ReferenceClock_init_(t_RinexClock$ReferenceClock *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
            RinexClock$ReferenceClock object((jobject) NULL);

            if (!parseArgs(args, "ssDkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = RinexClock$ReferenceClock(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexClock$ReferenceClock_getClockConstraint(t_RinexClock$ReferenceClock *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockConstraint());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ReferenceClock_getClockID(t_RinexClock$ReferenceClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getClockID());
            return j2p(result);
          }

          static PyObject *t_RinexClock$ReferenceClock_getEndDate(t_RinexClock$ReferenceClock *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getEndDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexClock$ReferenceClock_getReferenceName(t_RinexClock$ReferenceClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceName());
            return j2p(result);
          }

          static PyObject *t_RinexClock$ReferenceClock_getStartDate(t_RinexClock$ReferenceClock *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getStartDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__clockConstraint(t_RinexClock$ReferenceClock *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockConstraint());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__clockID(t_RinexClock$ReferenceClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getClockID());
            return j2p(value);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__endDate(t_RinexClock$ReferenceClock *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getEndDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__referenceName(t_RinexClock$ReferenceClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceName());
            return j2p(value);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__startDate(t_RinexClock$ReferenceClock *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getStartDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContributionContext.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *AbstractGaussianContributionContext::class$ = NULL;
            jmethodID *AbstractGaussianContributionContext::mids$ = NULL;
            bool AbstractGaussianContributionContext::live$ = false;

            jclass AbstractGaussianContributionContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContributionContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getCo2AB_456d9a2f64d6b28d] = env->getMethodID(cls, "getCo2AB", "()D");
                mids$[mid_getMeanMotion_456d9a2f64d6b28d] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
                mids$[mid_getOOA_456d9a2f64d6b28d] = env->getMethodID(cls, "getOOA", "()D");
                mids$[mid_getOOAB_456d9a2f64d6b28d] = env->getMethodID(cls, "getOOAB", "()D");
                mids$[mid_getOoBpo_456d9a2f64d6b28d] = env->getMethodID(cls, "getOoBpo", "()D");
                mids$[mid_getOoMU_456d9a2f64d6b28d] = env->getMethodID(cls, "getOoMU", "()D");
                mids$[mid_getTon2a_456d9a2f64d6b28d] = env->getMethodID(cls, "getTon2a", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble AbstractGaussianContributionContext::getCo2AB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCo2AB_456d9a2f64d6b28d]);
            }

            jdouble AbstractGaussianContributionContext::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_456d9a2f64d6b28d]);
            }

            jdouble AbstractGaussianContributionContext::getMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
            }

            jdouble AbstractGaussianContributionContext::getOOA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOOA_456d9a2f64d6b28d]);
            }

            jdouble AbstractGaussianContributionContext::getOOAB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOOAB_456d9a2f64d6b28d]);
            }

            jdouble AbstractGaussianContributionContext::getOoBpo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoBpo_456d9a2f64d6b28d]);
            }

            jdouble AbstractGaussianContributionContext::getOoMU() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoMU_456d9a2f64d6b28d]);
            }

            jdouble AbstractGaussianContributionContext::getTon2a() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTon2a_456d9a2f64d6b28d]);
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
          namespace forces {
            static PyObject *t_AbstractGaussianContributionContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGaussianContributionContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGaussianContributionContext_getCo2AB(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getMeanMotion(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getMu(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getOOA(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getOOAB(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getOoBpo(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getOoMU(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getTon2a(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_get__co2AB(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__meanMotion(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__mu(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__oOA(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__oOAB(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__ooBpo(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__ooMU(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__ton2a(t_AbstractGaussianContributionContext *self, void *data);
            static PyGetSetDef t_AbstractGaussianContributionContext__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, co2AB),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, meanMotion),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, mu),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, oOA),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, oOAB),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, ooBpo),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, ooMU),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, ton2a),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractGaussianContributionContext__methods_[] = {
              DECLARE_METHOD(t_AbstractGaussianContributionContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getMu, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getOOA, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getOOAB, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getOoBpo, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getOoMU, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getTon2a, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractGaussianContributionContext)[] = {
              { Py_tp_methods, t_AbstractGaussianContributionContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractGaussianContributionContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractGaussianContributionContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(AbstractGaussianContributionContext, t_AbstractGaussianContributionContext, AbstractGaussianContributionContext);

            void t_AbstractGaussianContributionContext::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractGaussianContributionContext), &PY_TYPE_DEF(AbstractGaussianContributionContext), module, "AbstractGaussianContributionContext", 0);
            }

            void t_AbstractGaussianContributionContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContributionContext), "class_", make_descriptor(AbstractGaussianContributionContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContributionContext), "wrapfn_", make_descriptor(t_AbstractGaussianContributionContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContributionContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractGaussianContributionContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractGaussianContributionContext::initializeClass, 1)))
                return NULL;
              return t_AbstractGaussianContributionContext::wrap_Object(AbstractGaussianContributionContext(((t_AbstractGaussianContributionContext *) arg)->object.this$));
            }
            static PyObject *t_AbstractGaussianContributionContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractGaussianContributionContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractGaussianContributionContext_getCo2AB(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCo2AB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getMeanMotion(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getMu(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMu());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getOOA(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOOA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getOOAB(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOOAB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getOoBpo(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoBpo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getOoMU(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoMU());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getTon2a(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTon2a());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__co2AB(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCo2AB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__meanMotion(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__mu(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMu());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__oOA(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOOA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__oOAB(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOOAB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__ooBpo(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoBpo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__ooMU(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoMU());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__ton2a(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTon2a());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/RecordAndContinue.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/propagation/events/handlers/RecordAndContinue$Event.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *RecordAndContinue::class$ = NULL;
          jmethodID *RecordAndContinue::mids$ = NULL;
          bool RecordAndContinue::live$ = false;

          jclass RecordAndContinue::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/RecordAndContinue");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_65de9727799c5641] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_eventOccurred_66531e3c1769dca9] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_getEvents_a6156df500549a58] = env->getMethodID(cls, "getEvents", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RecordAndContinue::RecordAndContinue() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          RecordAndContinue::RecordAndContinue(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_65de9727799c5641, a0.this$)) {}

          void RecordAndContinue::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
          }

          ::org::hipparchus::ode::events::Action RecordAndContinue::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_66531e3c1769dca9], a0.this$, a1.this$, a2));
          }

          ::java::util::List RecordAndContinue::getEvents() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEvents_a6156df500549a58]));
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
      namespace events {
        namespace handlers {
          static PyObject *t_RecordAndContinue_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RecordAndContinue_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RecordAndContinue_init_(t_RecordAndContinue *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RecordAndContinue_clear(t_RecordAndContinue *self);
          static PyObject *t_RecordAndContinue_eventOccurred(t_RecordAndContinue *self, PyObject *args);
          static PyObject *t_RecordAndContinue_getEvents(t_RecordAndContinue *self);
          static PyObject *t_RecordAndContinue_get__events(t_RecordAndContinue *self, void *data);
          static PyGetSetDef t_RecordAndContinue__fields_[] = {
            DECLARE_GET_FIELD(t_RecordAndContinue, events),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RecordAndContinue__methods_[] = {
            DECLARE_METHOD(t_RecordAndContinue, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordAndContinue, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordAndContinue, clear, METH_NOARGS),
            DECLARE_METHOD(t_RecordAndContinue, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_RecordAndContinue, getEvents, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RecordAndContinue)[] = {
            { Py_tp_methods, t_RecordAndContinue__methods_ },
            { Py_tp_init, (void *) t_RecordAndContinue_init_ },
            { Py_tp_getset, t_RecordAndContinue__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RecordAndContinue)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RecordAndContinue, t_RecordAndContinue, RecordAndContinue);

          void t_RecordAndContinue::install(PyObject *module)
          {
            installType(&PY_TYPE(RecordAndContinue), &PY_TYPE_DEF(RecordAndContinue), module, "RecordAndContinue", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue), "Event", make_descriptor(&PY_TYPE_DEF(RecordAndContinue$Event)));
          }

          void t_RecordAndContinue::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue), "class_", make_descriptor(RecordAndContinue::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue), "wrapfn_", make_descriptor(t_RecordAndContinue::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RecordAndContinue_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RecordAndContinue::initializeClass, 1)))
              return NULL;
            return t_RecordAndContinue::wrap_Object(RecordAndContinue(((t_RecordAndContinue *) arg)->object.this$));
          }
          static PyObject *t_RecordAndContinue_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RecordAndContinue::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RecordAndContinue_init_(t_RecordAndContinue *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                RecordAndContinue object((jobject) NULL);

                INT_CALL(object = RecordAndContinue());
                self->object = object;
                break;
              }
             case 1:
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                RecordAndContinue object((jobject) NULL);

                if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = RecordAndContinue(a0));
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

          static PyObject *t_RecordAndContinue_clear(t_RecordAndContinue *self)
          {
            OBJ_CALL(self->object.clear());
            Py_RETURN_NONE;
          }

          static PyObject *t_RecordAndContinue_eventOccurred(t_RecordAndContinue *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a1((jobject) NULL);
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "kkZ", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }

          static PyObject *t_RecordAndContinue_getEvents(t_RecordAndContinue *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getEvents());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::events::handlers::PY_TYPE(RecordAndContinue$Event));
          }

          static PyObject *t_RecordAndContinue_get__events(t_RecordAndContinue *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getEvents());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriversList$DelegatingDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterDriversList::class$ = NULL;
      jmethodID *ParameterDriversList::mids$ = NULL;
      bool ParameterDriversList::live$ = false;

      jclass ParameterDriversList::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterDriversList");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_add_a4c33e1e91b3ca8e] = env->getMethodID(cls, "add", "(Lorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_filter_50a2e0b139e80a58] = env->getMethodID(cls, "filter", "(Z)V");
          mids$[mid_findByName_b70a82bb0c9a7331] = env->getMethodID(cls, "findByName", "(Ljava/lang/String;)Lorg/orekit/utils/ParameterDriversList$DelegatingDriver;");
          mids$[mid_findDelegatingSpanNameBySpanName_43625fc1c3d86afe] = env->getMethodID(cls, "findDelegatingSpanNameBySpanName", "(Ljava/lang/String;)Ljava/lang/String;");
          mids$[mid_getDrivers_a6156df500549a58] = env->getMethodID(cls, "getDrivers", "()Ljava/util/List;");
          mids$[mid_getNbParams_f2f64475e4580546] = env->getMethodID(cls, "getNbParams", "()I");
          mids$[mid_getNbValuesToEstimate_f2f64475e4580546] = env->getMethodID(cls, "getNbValuesToEstimate", "()I");
          mids$[mid_sort_7ae3461a92a43152] = env->getMethodID(cls, "sort", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ParameterDriversList::ParameterDriversList() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void ParameterDriversList::add(const ::org::orekit::utils::ParameterDriver & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_add_a4c33e1e91b3ca8e], a0.this$);
      }

      void ParameterDriversList::filter(jboolean a0) const
      {
        env->callVoidMethod(this$, mids$[mid_filter_50a2e0b139e80a58], a0);
      }

      ::org::orekit::utils::ParameterDriversList$DelegatingDriver ParameterDriversList::findByName(const ::java::lang::String & a0) const
      {
        return ::org::orekit::utils::ParameterDriversList$DelegatingDriver(env->callObjectMethod(this$, mids$[mid_findByName_b70a82bb0c9a7331], a0.this$));
      }

      ::java::lang::String ParameterDriversList::findDelegatingSpanNameBySpanName(const ::java::lang::String & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_findDelegatingSpanNameBySpanName_43625fc1c3d86afe], a0.this$));
      }

      ::java::util::List ParameterDriversList::getDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDrivers_a6156df500549a58]));
      }

      jint ParameterDriversList::getNbParams() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbParams_f2f64475e4580546]);
      }

      jint ParameterDriversList::getNbValuesToEstimate() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbValuesToEstimate_f2f64475e4580546]);
      }

      void ParameterDriversList::sort() const
      {
        env->callVoidMethod(this$, mids$[mid_sort_7ae3461a92a43152]);
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
      static PyObject *t_ParameterDriversList_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriversList_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ParameterDriversList_init_(t_ParameterDriversList *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ParameterDriversList_add(t_ParameterDriversList *self, PyObject *arg);
      static PyObject *t_ParameterDriversList_filter(t_ParameterDriversList *self, PyObject *arg);
      static PyObject *t_ParameterDriversList_findByName(t_ParameterDriversList *self, PyObject *arg);
      static PyObject *t_ParameterDriversList_findDelegatingSpanNameBySpanName(t_ParameterDriversList *self, PyObject *arg);
      static PyObject *t_ParameterDriversList_getDrivers(t_ParameterDriversList *self);
      static PyObject *t_ParameterDriversList_getNbParams(t_ParameterDriversList *self);
      static PyObject *t_ParameterDriversList_getNbValuesToEstimate(t_ParameterDriversList *self);
      static PyObject *t_ParameterDriversList_sort(t_ParameterDriversList *self);
      static PyObject *t_ParameterDriversList_get__drivers(t_ParameterDriversList *self, void *data);
      static PyObject *t_ParameterDriversList_get__nbParams(t_ParameterDriversList *self, void *data);
      static PyObject *t_ParameterDriversList_get__nbValuesToEstimate(t_ParameterDriversList *self, void *data);
      static PyGetSetDef t_ParameterDriversList__fields_[] = {
        DECLARE_GET_FIELD(t_ParameterDriversList, drivers),
        DECLARE_GET_FIELD(t_ParameterDriversList, nbParams),
        DECLARE_GET_FIELD(t_ParameterDriversList, nbValuesToEstimate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterDriversList__methods_[] = {
        DECLARE_METHOD(t_ParameterDriversList, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversList, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversList, add, METH_O),
        DECLARE_METHOD(t_ParameterDriversList, filter, METH_O),
        DECLARE_METHOD(t_ParameterDriversList, findByName, METH_O),
        DECLARE_METHOD(t_ParameterDriversList, findDelegatingSpanNameBySpanName, METH_O),
        DECLARE_METHOD(t_ParameterDriversList, getDrivers, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriversList, getNbParams, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriversList, getNbValuesToEstimate, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriversList, sort, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterDriversList)[] = {
        { Py_tp_methods, t_ParameterDriversList__methods_ },
        { Py_tp_init, (void *) t_ParameterDriversList_init_ },
        { Py_tp_getset, t_ParameterDriversList__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterDriversList)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterDriversList, t_ParameterDriversList, ParameterDriversList);

      void t_ParameterDriversList::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterDriversList), &PY_TYPE_DEF(ParameterDriversList), module, "ParameterDriversList", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList), "DelegatingDriver", make_descriptor(&PY_TYPE_DEF(ParameterDriversList$DelegatingDriver)));
      }

      void t_ParameterDriversList::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList), "class_", make_descriptor(ParameterDriversList::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList), "wrapfn_", make_descriptor(t_ParameterDriversList::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterDriversList_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterDriversList::initializeClass, 1)))
          return NULL;
        return t_ParameterDriversList::wrap_Object(ParameterDriversList(((t_ParameterDriversList *) arg)->object.this$));
      }
      static PyObject *t_ParameterDriversList_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterDriversList::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ParameterDriversList_init_(t_ParameterDriversList *self, PyObject *args, PyObject *kwds)
      {
        ParameterDriversList object((jobject) NULL);

        INT_CALL(object = ParameterDriversList());
        self->object = object;

        return 0;
      }

      static PyObject *t_ParameterDriversList_add(t_ParameterDriversList *self, PyObject *arg)
      {
        ::org::orekit::utils::ParameterDriver a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
        {
          OBJ_CALL(self->object.add(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversList_filter(t_ParameterDriversList *self, PyObject *arg)
      {
        jboolean a0;

        if (!parseArg(arg, "Z", &a0))
        {
          OBJ_CALL(self->object.filter(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "filter", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversList_findByName(t_ParameterDriversList *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::utils::ParameterDriversList$DelegatingDriver result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.findByName(a0));
          return ::org::orekit::utils::t_ParameterDriversList$DelegatingDriver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "findByName", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversList_findDelegatingSpanNameBySpanName(t_ParameterDriversList *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.findDelegatingSpanNameBySpanName(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "findDelegatingSpanNameBySpanName", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversList_getDrivers(t_ParameterDriversList *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriversList$DelegatingDriver));
      }

      static PyObject *t_ParameterDriversList_getNbParams(t_ParameterDriversList *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbParams());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ParameterDriversList_getNbValuesToEstimate(t_ParameterDriversList *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbValuesToEstimate());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ParameterDriversList_sort(t_ParameterDriversList *self)
      {
        OBJ_CALL(self->object.sort());
        Py_RETURN_NONE;
      }

      static PyObject *t_ParameterDriversList_get__drivers(t_ParameterDriversList *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ParameterDriversList_get__nbParams(t_ParameterDriversList *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbParams());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ParameterDriversList_get__nbValuesToEstimate(t_ParameterDriversList *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbValuesToEstimate());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmSegment.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmSegment::class$ = NULL;
            jmethodID *CdmSegment::mids$ = NULL;
            bool CdmSegment::live$ = false;

            jclass CdmSegment::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmSegment");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_2cf8e366edcf1d43] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;Lorg/orekit/files/ccsds/ndm/cdm/CdmData;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmSegment::CdmSegment(const ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata & a0, const ::org::orekit::files::ccsds::ndm::cdm::CdmData & a1) : ::org::orekit::files::ccsds::section::Segment(env->newObject(initializeClass, &mids$, mid_init$_2cf8e366edcf1d43, a0.this$, a1.this$)) {}
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
            static PyObject *t_CdmSegment_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmSegment_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmSegment_of_(t_CdmSegment *self, PyObject *args);
            static int t_CdmSegment_init_(t_CdmSegment *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmSegment_get__parameters_(t_CdmSegment *self, void *data);
            static PyGetSetDef t_CdmSegment__fields_[] = {
              DECLARE_GET_FIELD(t_CdmSegment, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmSegment__methods_[] = {
              DECLARE_METHOD(t_CdmSegment, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmSegment, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmSegment, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmSegment)[] = {
              { Py_tp_methods, t_CdmSegment__methods_ },
              { Py_tp_init, (void *) t_CdmSegment_init_ },
              { Py_tp_getset, t_CdmSegment__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmSegment)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Segment),
              NULL
            };

            DEFINE_TYPE(CdmSegment, t_CdmSegment, CdmSegment);
            PyObject *t_CdmSegment::wrap_Object(const CdmSegment& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_CdmSegment::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmSegment *self = (t_CdmSegment *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_CdmSegment::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_CdmSegment::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmSegment *self = (t_CdmSegment *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_CdmSegment::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmSegment), &PY_TYPE_DEF(CdmSegment), module, "CdmSegment", 0);
            }

            void t_CdmSegment::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmSegment), "class_", make_descriptor(CdmSegment::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmSegment), "wrapfn_", make_descriptor(t_CdmSegment::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmSegment), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmSegment_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmSegment::initializeClass, 1)))
                return NULL;
              return t_CdmSegment::wrap_Object(CdmSegment(((t_CdmSegment *) arg)->object.this$));
            }
            static PyObject *t_CdmSegment_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmSegment::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CdmSegment_of_(t_CdmSegment *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CdmSegment_init_(t_CdmSegment *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmData a1((jobject) NULL);
              CdmSegment object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmData::initializeClass, &a0, &a1))
              {
                INT_CALL(object = CdmSegment(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::cdm::PY_TYPE(CdmMetadata);
                self->parameters[1] = ::org::orekit::files::ccsds::ndm::cdm::PY_TYPE(CdmData);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
            static PyObject *t_CdmSegment_get__parameters_(t_CdmSegment *self, void *data)
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
#include "org/hipparchus/optim/linear/LinearObjectiveFunction.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *LinearObjectiveFunction::class$ = NULL;
        jmethodID *LinearObjectiveFunction::mids$ = NULL;
        bool LinearObjectiveFunction::live$ = false;

        jclass LinearObjectiveFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/LinearObjectiveFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_caadaecfce5fba2f] = env->getMethodID(cls, "<init>", "([DD)V");
            mids$[mid_init$_971f7be7e0a3e00b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;D)V");
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getCoefficients_6d9adf1d5b463928] = env->getMethodID(cls, "getCoefficients", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getConstantTerm_456d9a2f64d6b28d] = env->getMethodID(cls, "getConstantTerm", "()D");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_value_f05cb8c6dfd5e0b9] = env->getMethodID(cls, "value", "([D)D");
            mids$[mid_value_5ed80776077f2bda] = env->getMethodID(cls, "value", "(Lorg/hipparchus/linear/RealVector;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearObjectiveFunction::LinearObjectiveFunction(const JArray< jdouble > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_caadaecfce5fba2f, a0.this$, a1)) {}

        LinearObjectiveFunction::LinearObjectiveFunction(const ::org::hipparchus::linear::RealVector & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_971f7be7e0a3e00b, a0.this$, a1)) {}

        jboolean LinearObjectiveFunction::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        ::org::hipparchus::linear::RealVector LinearObjectiveFunction::getCoefficients() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getCoefficients_6d9adf1d5b463928]));
        }

        jdouble LinearObjectiveFunction::getConstantTerm() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getConstantTerm_456d9a2f64d6b28d]);
        }

        jint LinearObjectiveFunction::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
        }

        jdouble LinearObjectiveFunction::value(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_f05cb8c6dfd5e0b9], a0.this$);
        }

        jdouble LinearObjectiveFunction::value(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_5ed80776077f2bda], a0.this$);
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
    namespace optim {
      namespace linear {
        static PyObject *t_LinearObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LinearObjectiveFunction_init_(t_LinearObjectiveFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LinearObjectiveFunction_equals(t_LinearObjectiveFunction *self, PyObject *args);
        static PyObject *t_LinearObjectiveFunction_getCoefficients(t_LinearObjectiveFunction *self);
        static PyObject *t_LinearObjectiveFunction_getConstantTerm(t_LinearObjectiveFunction *self);
        static PyObject *t_LinearObjectiveFunction_hashCode(t_LinearObjectiveFunction *self, PyObject *args);
        static PyObject *t_LinearObjectiveFunction_value(t_LinearObjectiveFunction *self, PyObject *args);
        static PyObject *t_LinearObjectiveFunction_get__coefficients(t_LinearObjectiveFunction *self, void *data);
        static PyObject *t_LinearObjectiveFunction_get__constantTerm(t_LinearObjectiveFunction *self, void *data);
        static PyGetSetDef t_LinearObjectiveFunction__fields_[] = {
          DECLARE_GET_FIELD(t_LinearObjectiveFunction, coefficients),
          DECLARE_GET_FIELD(t_LinearObjectiveFunction, constantTerm),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LinearObjectiveFunction__methods_[] = {
          DECLARE_METHOD(t_LinearObjectiveFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearObjectiveFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearObjectiveFunction, equals, METH_VARARGS),
          DECLARE_METHOD(t_LinearObjectiveFunction, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_LinearObjectiveFunction, getConstantTerm, METH_NOARGS),
          DECLARE_METHOD(t_LinearObjectiveFunction, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_LinearObjectiveFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearObjectiveFunction)[] = {
          { Py_tp_methods, t_LinearObjectiveFunction__methods_ },
          { Py_tp_init, (void *) t_LinearObjectiveFunction_init_ },
          { Py_tp_getset, t_LinearObjectiveFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearObjectiveFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LinearObjectiveFunction, t_LinearObjectiveFunction, LinearObjectiveFunction);

        void t_LinearObjectiveFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearObjectiveFunction), &PY_TYPE_DEF(LinearObjectiveFunction), module, "LinearObjectiveFunction", 0);
        }

        void t_LinearObjectiveFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearObjectiveFunction), "class_", make_descriptor(LinearObjectiveFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearObjectiveFunction), "wrapfn_", make_descriptor(t_LinearObjectiveFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearObjectiveFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearObjectiveFunction::initializeClass, 1)))
            return NULL;
          return t_LinearObjectiveFunction::wrap_Object(LinearObjectiveFunction(((t_LinearObjectiveFunction *) arg)->object.this$));
        }
        static PyObject *t_LinearObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearObjectiveFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LinearObjectiveFunction_init_(t_LinearObjectiveFunction *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              jdouble a1;
              LinearObjectiveFunction object((jobject) NULL);

              if (!parseArgs(args, "[DD", &a0, &a1))
              {
                INT_CALL(object = LinearObjectiveFunction(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              jdouble a1;
              LinearObjectiveFunction object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
              {
                INT_CALL(object = LinearObjectiveFunction(a0, a1));
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

        static PyObject *t_LinearObjectiveFunction_equals(t_LinearObjectiveFunction *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LinearObjectiveFunction), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_LinearObjectiveFunction_getCoefficients(t_LinearObjectiveFunction *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_LinearObjectiveFunction_getConstantTerm(t_LinearObjectiveFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getConstantTerm());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LinearObjectiveFunction_hashCode(t_LinearObjectiveFunction *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(LinearObjectiveFunction), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_LinearObjectiveFunction_value(t_LinearObjectiveFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_LinearObjectiveFunction_get__coefficients(t_LinearObjectiveFunction *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_LinearObjectiveFunction_get__constantTerm(t_LinearObjectiveFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getConstantTerm());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Locale.h"
#include "java/util/Locale.h"
#include "java/util/List.h"
#include "java/util/Locale$IsoCountryCode.h"
#include "java/io/Serializable.h"
#include "java/util/MissingResourceException.h"
#include "java/util/Collection.h"
#include "java/lang/Character.h"
#include "java/util/Locale$Category.h"
#include "java/util/Set.h"
#include "java/util/Locale$LanguageRange.h"
#include "java/lang/Class.h"
#include "java/util/Locale$FilteringMode.h"
#include "java/lang/Cloneable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Locale::class$ = NULL;
    jmethodID *Locale::mids$ = NULL;
    bool Locale::live$ = false;
    Locale *Locale::CANADA = NULL;
    Locale *Locale::CANADA_FRENCH = NULL;
    Locale *Locale::CHINA = NULL;
    Locale *Locale::CHINESE = NULL;
    Locale *Locale::ENGLISH = NULL;
    Locale *Locale::FRANCE = NULL;
    Locale *Locale::FRENCH = NULL;
    Locale *Locale::GERMAN = NULL;
    Locale *Locale::GERMANY = NULL;
    Locale *Locale::ITALIAN = NULL;
    Locale *Locale::ITALY = NULL;
    Locale *Locale::JAPAN = NULL;
    Locale *Locale::JAPANESE = NULL;
    Locale *Locale::KOREA = NULL;
    Locale *Locale::KOREAN = NULL;
    Locale *Locale::PRC = NULL;
    jchar Locale::PRIVATE_USE_EXTENSION = (jchar) 0;
    Locale *Locale::ROOT = NULL;
    Locale *Locale::SIMPLIFIED_CHINESE = NULL;
    Locale *Locale::TAIWAN = NULL;
    Locale *Locale::TRADITIONAL_CHINESE = NULL;
    Locale *Locale::UK = NULL;
    jchar Locale::UNICODE_LOCALE_EXTENSION = (jchar) 0;
    Locale *Locale::US = NULL;

    jclass Locale::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Locale");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_96073c87872b7a97] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_init$_de8316969b81209c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_clone_dfd7647d9110ac9f] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_filter_56d1abdcfed9e3ce] = env->getStaticMethodID(cls, "filter", "(Ljava/util/List;Ljava/util/Collection;)Ljava/util/List;");
        mids$[mid_filter_306c2e2a3b1fbe34] = env->getStaticMethodID(cls, "filter", "(Ljava/util/List;Ljava/util/Collection;Ljava/util/Locale$FilteringMode;)Ljava/util/List;");
        mids$[mid_filterTags_56d1abdcfed9e3ce] = env->getStaticMethodID(cls, "filterTags", "(Ljava/util/List;Ljava/util/Collection;)Ljava/util/List;");
        mids$[mid_filterTags_306c2e2a3b1fbe34] = env->getStaticMethodID(cls, "filterTags", "(Ljava/util/List;Ljava/util/Collection;Ljava/util/Locale$FilteringMode;)Ljava/util/List;");
        mids$[mid_forLanguageTag_edb959298a7071d1] = env->getStaticMethodID(cls, "forLanguageTag", "(Ljava/lang/String;)Ljava/util/Locale;");
        mids$[mid_getAvailableLocales_81e8fdf65840780c] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
        mids$[mid_getCountry_0090f7797e403f43] = env->getMethodID(cls, "getCountry", "()Ljava/lang/String;");
        mids$[mid_getDefault_5e8efe29e6703a20] = env->getStaticMethodID(cls, "getDefault", "()Ljava/util/Locale;");
        mids$[mid_getDefault_1019c09d5ac29358] = env->getStaticMethodID(cls, "getDefault", "(Ljava/util/Locale$Category;)Ljava/util/Locale;");
        mids$[mid_getDisplayCountry_0090f7797e403f43] = env->getMethodID(cls, "getDisplayCountry", "()Ljava/lang/String;");
        mids$[mid_getDisplayCountry_bab3be9b232acc5a] = env->getMethodID(cls, "getDisplayCountry", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayLanguage_0090f7797e403f43] = env->getMethodID(cls, "getDisplayLanguage", "()Ljava/lang/String;");
        mids$[mid_getDisplayLanguage_bab3be9b232acc5a] = env->getMethodID(cls, "getDisplayLanguage", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayName_0090f7797e403f43] = env->getMethodID(cls, "getDisplayName", "()Ljava/lang/String;");
        mids$[mid_getDisplayName_bab3be9b232acc5a] = env->getMethodID(cls, "getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayScript_0090f7797e403f43] = env->getMethodID(cls, "getDisplayScript", "()Ljava/lang/String;");
        mids$[mid_getDisplayScript_bab3be9b232acc5a] = env->getMethodID(cls, "getDisplayScript", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayVariant_0090f7797e403f43] = env->getMethodID(cls, "getDisplayVariant", "()Ljava/lang/String;");
        mids$[mid_getDisplayVariant_bab3be9b232acc5a] = env->getMethodID(cls, "getDisplayVariant", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getExtension_1e1a62b6126a9504] = env->getMethodID(cls, "getExtension", "(C)Ljava/lang/String;");
        mids$[mid_getExtensionKeys_e9e1a6780fe94297] = env->getMethodID(cls, "getExtensionKeys", "()Ljava/util/Set;");
        mids$[mid_getISO3Country_0090f7797e403f43] = env->getMethodID(cls, "getISO3Country", "()Ljava/lang/String;");
        mids$[mid_getISO3Language_0090f7797e403f43] = env->getMethodID(cls, "getISO3Language", "()Ljava/lang/String;");
        mids$[mid_getISOCountries_0f62ccf08eef5924] = env->getStaticMethodID(cls, "getISOCountries", "()[Ljava/lang/String;");
        mids$[mid_getISOCountries_6dff41f981093328] = env->getStaticMethodID(cls, "getISOCountries", "(Ljava/util/Locale$IsoCountryCode;)Ljava/util/Set;");
        mids$[mid_getISOLanguages_0f62ccf08eef5924] = env->getStaticMethodID(cls, "getISOLanguages", "()[Ljava/lang/String;");
        mids$[mid_getLanguage_0090f7797e403f43] = env->getMethodID(cls, "getLanguage", "()Ljava/lang/String;");
        mids$[mid_getScript_0090f7797e403f43] = env->getMethodID(cls, "getScript", "()Ljava/lang/String;");
        mids$[mid_getUnicodeLocaleAttributes_e9e1a6780fe94297] = env->getMethodID(cls, "getUnicodeLocaleAttributes", "()Ljava/util/Set;");
        mids$[mid_getUnicodeLocaleKeys_e9e1a6780fe94297] = env->getMethodID(cls, "getUnicodeLocaleKeys", "()Ljava/util/Set;");
        mids$[mid_getUnicodeLocaleType_43625fc1c3d86afe] = env->getMethodID(cls, "getUnicodeLocaleType", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getVariant_0090f7797e403f43] = env->getMethodID(cls, "getVariant", "()Ljava/lang/String;");
        mids$[mid_hasExtensions_e470b6d9e0d979db] = env->getMethodID(cls, "hasExtensions", "()Z");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_lookup_3d197a4bdc2e37e9] = env->getStaticMethodID(cls, "lookup", "(Ljava/util/List;Ljava/util/Collection;)Ljava/util/Locale;");
        mids$[mid_lookupTag_b44f48305c4052f2] = env->getStaticMethodID(cls, "lookupTag", "(Ljava/util/List;Ljava/util/Collection;)Ljava/lang/String;");
        mids$[mid_setDefault_9ea720baeb257525] = env->getStaticMethodID(cls, "setDefault", "(Ljava/util/Locale;)V");
        mids$[mid_setDefault_2c847bf37b9d570a] = env->getStaticMethodID(cls, "setDefault", "(Ljava/util/Locale$Category;Ljava/util/Locale;)V");
        mids$[mid_stripExtensions_5e8efe29e6703a20] = env->getMethodID(cls, "stripExtensions", "()Ljava/util/Locale;");
        mids$[mid_toLanguageTag_0090f7797e403f43] = env->getMethodID(cls, "toLanguageTag", "()Ljava/lang/String;");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        CANADA = new Locale(env->getStaticObjectField(cls, "CANADA", "Ljava/util/Locale;"));
        CANADA_FRENCH = new Locale(env->getStaticObjectField(cls, "CANADA_FRENCH", "Ljava/util/Locale;"));
        CHINA = new Locale(env->getStaticObjectField(cls, "CHINA", "Ljava/util/Locale;"));
        CHINESE = new Locale(env->getStaticObjectField(cls, "CHINESE", "Ljava/util/Locale;"));
        ENGLISH = new Locale(env->getStaticObjectField(cls, "ENGLISH", "Ljava/util/Locale;"));
        FRANCE = new Locale(env->getStaticObjectField(cls, "FRANCE", "Ljava/util/Locale;"));
        FRENCH = new Locale(env->getStaticObjectField(cls, "FRENCH", "Ljava/util/Locale;"));
        GERMAN = new Locale(env->getStaticObjectField(cls, "GERMAN", "Ljava/util/Locale;"));
        GERMANY = new Locale(env->getStaticObjectField(cls, "GERMANY", "Ljava/util/Locale;"));
        ITALIAN = new Locale(env->getStaticObjectField(cls, "ITALIAN", "Ljava/util/Locale;"));
        ITALY = new Locale(env->getStaticObjectField(cls, "ITALY", "Ljava/util/Locale;"));
        JAPAN = new Locale(env->getStaticObjectField(cls, "JAPAN", "Ljava/util/Locale;"));
        JAPANESE = new Locale(env->getStaticObjectField(cls, "JAPANESE", "Ljava/util/Locale;"));
        KOREA = new Locale(env->getStaticObjectField(cls, "KOREA", "Ljava/util/Locale;"));
        KOREAN = new Locale(env->getStaticObjectField(cls, "KOREAN", "Ljava/util/Locale;"));
        PRC = new Locale(env->getStaticObjectField(cls, "PRC", "Ljava/util/Locale;"));
        PRIVATE_USE_EXTENSION = env->getStaticCharField(cls, "PRIVATE_USE_EXTENSION");
        ROOT = new Locale(env->getStaticObjectField(cls, "ROOT", "Ljava/util/Locale;"));
        SIMPLIFIED_CHINESE = new Locale(env->getStaticObjectField(cls, "SIMPLIFIED_CHINESE", "Ljava/util/Locale;"));
        TAIWAN = new Locale(env->getStaticObjectField(cls, "TAIWAN", "Ljava/util/Locale;"));
        TRADITIONAL_CHINESE = new Locale(env->getStaticObjectField(cls, "TRADITIONAL_CHINESE", "Ljava/util/Locale;"));
        UK = new Locale(env->getStaticObjectField(cls, "UK", "Ljava/util/Locale;"));
        UNICODE_LOCALE_EXTENSION = env->getStaticCharField(cls, "UNICODE_LOCALE_EXTENSION");
        US = new Locale(env->getStaticObjectField(cls, "US", "Ljava/util/Locale;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Locale::Locale(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    Locale::Locale(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_96073c87872b7a97, a0.this$, a1.this$)) {}

    Locale::Locale(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de8316969b81209c, a0.this$, a1.this$, a2.this$)) {}

    ::java::lang::Object Locale::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_dfd7647d9110ac9f]));
    }

    jboolean Locale::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    ::java::util::List Locale::filter(const ::java::util::List & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_filter_56d1abdcfed9e3ce], a0.this$, a1.this$));
    }

    ::java::util::List Locale::filter(const ::java::util::List & a0, const ::java::util::Collection & a1, const ::java::util::Locale$FilteringMode & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_filter_306c2e2a3b1fbe34], a0.this$, a1.this$, a2.this$));
    }

    ::java::util::List Locale::filterTags(const ::java::util::List & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_filterTags_56d1abdcfed9e3ce], a0.this$, a1.this$));
    }

    ::java::util::List Locale::filterTags(const ::java::util::List & a0, const ::java::util::Collection & a1, const ::java::util::Locale$FilteringMode & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_filterTags_306c2e2a3b1fbe34], a0.this$, a1.this$, a2.this$));
    }

    Locale Locale::forLanguageTag(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Locale(env->callStaticObjectMethod(cls, mids$[mid_forLanguageTag_edb959298a7071d1], a0.this$));
    }

    JArray< Locale > Locale::getAvailableLocales()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_81e8fdf65840780c]));
    }

    ::java::lang::String Locale::getCountry() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCountry_0090f7797e403f43]));
    }

    Locale Locale::getDefault()
    {
      jclass cls = env->getClass(initializeClass);
      return Locale(env->callStaticObjectMethod(cls, mids$[mid_getDefault_5e8efe29e6703a20]));
    }

    Locale Locale::getDefault(const ::java::util::Locale$Category & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Locale(env->callStaticObjectMethod(cls, mids$[mid_getDefault_1019c09d5ac29358], a0.this$));
    }

    ::java::lang::String Locale::getDisplayCountry() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayCountry_0090f7797e403f43]));
    }

    ::java::lang::String Locale::getDisplayCountry(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayCountry_bab3be9b232acc5a], a0.this$));
    }

    ::java::lang::String Locale::getDisplayLanguage() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayLanguage_0090f7797e403f43]));
    }

    ::java::lang::String Locale::getDisplayLanguage(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayLanguage_bab3be9b232acc5a], a0.this$));
    }

    ::java::lang::String Locale::getDisplayName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_0090f7797e403f43]));
    }

    ::java::lang::String Locale::getDisplayName(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_bab3be9b232acc5a], a0.this$));
    }

    ::java::lang::String Locale::getDisplayScript() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayScript_0090f7797e403f43]));
    }

    ::java::lang::String Locale::getDisplayScript(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayScript_bab3be9b232acc5a], a0.this$));
    }

    ::java::lang::String Locale::getDisplayVariant() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayVariant_0090f7797e403f43]));
    }

    ::java::lang::String Locale::getDisplayVariant(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayVariant_bab3be9b232acc5a], a0.this$));
    }

    ::java::lang::String Locale::getExtension(jchar a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getExtension_1e1a62b6126a9504], a0));
    }

    ::java::util::Set Locale::getExtensionKeys() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getExtensionKeys_e9e1a6780fe94297]));
    }

    ::java::lang::String Locale::getISO3Country() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getISO3Country_0090f7797e403f43]));
    }

    ::java::lang::String Locale::getISO3Language() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getISO3Language_0090f7797e403f43]));
    }

    JArray< ::java::lang::String > Locale::getISOCountries()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::String >(env->callStaticObjectMethod(cls, mids$[mid_getISOCountries_0f62ccf08eef5924]));
    }

    ::java::util::Set Locale::getISOCountries(const ::java::util::Locale$IsoCountryCode & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_getISOCountries_6dff41f981093328], a0.this$));
    }

    JArray< ::java::lang::String > Locale::getISOLanguages()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::String >(env->callStaticObjectMethod(cls, mids$[mid_getISOLanguages_0f62ccf08eef5924]));
    }

    ::java::lang::String Locale::getLanguage() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLanguage_0090f7797e403f43]));
    }

    ::java::lang::String Locale::getScript() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getScript_0090f7797e403f43]));
    }

    ::java::util::Set Locale::getUnicodeLocaleAttributes() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getUnicodeLocaleAttributes_e9e1a6780fe94297]));
    }

    ::java::util::Set Locale::getUnicodeLocaleKeys() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getUnicodeLocaleKeys_e9e1a6780fe94297]));
    }

    ::java::lang::String Locale::getUnicodeLocaleType(const ::java::lang::String & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getUnicodeLocaleType_43625fc1c3d86afe], a0.this$));
    }

    ::java::lang::String Locale::getVariant() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getVariant_0090f7797e403f43]));
    }

    jboolean Locale::hasExtensions() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasExtensions_e470b6d9e0d979db]);
    }

    jint Locale::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    Locale Locale::lookup(const ::java::util::List & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Locale(env->callStaticObjectMethod(cls, mids$[mid_lookup_3d197a4bdc2e37e9], a0.this$, a1.this$));
    }

    ::java::lang::String Locale::lookupTag(const ::java::util::List & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_lookupTag_b44f48305c4052f2], a0.this$, a1.this$));
    }

    void Locale::setDefault(const Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setDefault_9ea720baeb257525], a0.this$);
    }

    void Locale::setDefault(const ::java::util::Locale$Category & a0, const Locale & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setDefault_2c847bf37b9d570a], a0.this$, a1.this$);
    }

    Locale Locale::stripExtensions() const
    {
      return Locale(env->callObjectMethod(this$, mids$[mid_stripExtensions_5e8efe29e6703a20]));
    }

    ::java::lang::String Locale::toLanguageTag() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toLanguageTag_0090f7797e403f43]));
    }

    ::java::lang::String Locale::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Locale_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Locale_init_(t_Locale *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Locale_clone(t_Locale *self);
    static PyObject *t_Locale_equals(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_filter(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_filterTags(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_forLanguageTag(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale_getAvailableLocales(PyTypeObject *type);
    static PyObject *t_Locale_getCountry(t_Locale *self);
    static PyObject *t_Locale_getDefault(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_getDisplayCountry(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getDisplayLanguage(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getDisplayName(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getDisplayScript(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getDisplayVariant(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getExtension(t_Locale *self, PyObject *arg);
    static PyObject *t_Locale_getExtensionKeys(t_Locale *self);
    static PyObject *t_Locale_getISO3Country(t_Locale *self);
    static PyObject *t_Locale_getISO3Language(t_Locale *self);
    static PyObject *t_Locale_getISOCountries(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_getISOLanguages(PyTypeObject *type);
    static PyObject *t_Locale_getLanguage(t_Locale *self);
    static PyObject *t_Locale_getScript(t_Locale *self);
    static PyObject *t_Locale_getUnicodeLocaleAttributes(t_Locale *self);
    static PyObject *t_Locale_getUnicodeLocaleKeys(t_Locale *self);
    static PyObject *t_Locale_getUnicodeLocaleType(t_Locale *self, PyObject *arg);
    static PyObject *t_Locale_getVariant(t_Locale *self);
    static PyObject *t_Locale_hasExtensions(t_Locale *self);
    static PyObject *t_Locale_hashCode(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_lookup(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_lookupTag(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_setDefault(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_stripExtensions(t_Locale *self);
    static PyObject *t_Locale_toLanguageTag(t_Locale *self);
    static PyObject *t_Locale_toString(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_get__availableLocales(t_Locale *self, void *data);
    static PyObject *t_Locale_get__country(t_Locale *self, void *data);
    static PyObject *t_Locale_get__default(t_Locale *self, void *data);
    static int t_Locale_set__default(t_Locale *self, PyObject *arg, void *data);
    static PyObject *t_Locale_get__displayCountry(t_Locale *self, void *data);
    static PyObject *t_Locale_get__displayLanguage(t_Locale *self, void *data);
    static PyObject *t_Locale_get__displayName(t_Locale *self, void *data);
    static PyObject *t_Locale_get__displayScript(t_Locale *self, void *data);
    static PyObject *t_Locale_get__displayVariant(t_Locale *self, void *data);
    static PyObject *t_Locale_get__extensionKeys(t_Locale *self, void *data);
    static PyObject *t_Locale_get__iSO3Country(t_Locale *self, void *data);
    static PyObject *t_Locale_get__iSO3Language(t_Locale *self, void *data);
    static PyObject *t_Locale_get__iSOCountries(t_Locale *self, void *data);
    static PyObject *t_Locale_get__iSOLanguages(t_Locale *self, void *data);
    static PyObject *t_Locale_get__language(t_Locale *self, void *data);
    static PyObject *t_Locale_get__script(t_Locale *self, void *data);
    static PyObject *t_Locale_get__unicodeLocaleAttributes(t_Locale *self, void *data);
    static PyObject *t_Locale_get__unicodeLocaleKeys(t_Locale *self, void *data);
    static PyObject *t_Locale_get__variant(t_Locale *self, void *data);
    static PyGetSetDef t_Locale__fields_[] = {
      DECLARE_GET_FIELD(t_Locale, availableLocales),
      DECLARE_GET_FIELD(t_Locale, country),
      DECLARE_GETSET_FIELD(t_Locale, default),
      DECLARE_GET_FIELD(t_Locale, displayCountry),
      DECLARE_GET_FIELD(t_Locale, displayLanguage),
      DECLARE_GET_FIELD(t_Locale, displayName),
      DECLARE_GET_FIELD(t_Locale, displayScript),
      DECLARE_GET_FIELD(t_Locale, displayVariant),
      DECLARE_GET_FIELD(t_Locale, extensionKeys),
      DECLARE_GET_FIELD(t_Locale, iSO3Country),
      DECLARE_GET_FIELD(t_Locale, iSO3Language),
      DECLARE_GET_FIELD(t_Locale, iSOCountries),
      DECLARE_GET_FIELD(t_Locale, iSOLanguages),
      DECLARE_GET_FIELD(t_Locale, language),
      DECLARE_GET_FIELD(t_Locale, script),
      DECLARE_GET_FIELD(t_Locale, unicodeLocaleAttributes),
      DECLARE_GET_FIELD(t_Locale, unicodeLocaleKeys),
      DECLARE_GET_FIELD(t_Locale, variant),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Locale__methods_[] = {
      DECLARE_METHOD(t_Locale, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale, clone, METH_NOARGS),
      DECLARE_METHOD(t_Locale, equals, METH_VARARGS),
      DECLARE_METHOD(t_Locale, filter, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, filterTags, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, forLanguageTag, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale, getAvailableLocales, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, getCountry, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getDefault, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, getDisplayCountry, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getDisplayLanguage, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getDisplayName, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getDisplayScript, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getDisplayVariant, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getExtension, METH_O),
      DECLARE_METHOD(t_Locale, getExtensionKeys, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getISO3Country, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getISO3Language, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getISOCountries, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, getISOLanguages, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, getLanguage, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getScript, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getUnicodeLocaleAttributes, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getUnicodeLocaleKeys, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getUnicodeLocaleType, METH_O),
      DECLARE_METHOD(t_Locale, getVariant, METH_NOARGS),
      DECLARE_METHOD(t_Locale, hasExtensions, METH_NOARGS),
      DECLARE_METHOD(t_Locale, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Locale, lookup, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, lookupTag, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, setDefault, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, stripExtensions, METH_NOARGS),
      DECLARE_METHOD(t_Locale, toLanguageTag, METH_NOARGS),
      DECLARE_METHOD(t_Locale, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Locale)[] = {
      { Py_tp_methods, t_Locale__methods_ },
      { Py_tp_init, (void *) t_Locale_init_ },
      { Py_tp_getset, t_Locale__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Locale)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Locale, t_Locale, Locale);

    void t_Locale::install(PyObject *module)
    {
      installType(&PY_TYPE(Locale), &PY_TYPE_DEF(Locale), module, "Locale", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "LanguageRange", make_descriptor(&PY_TYPE_DEF(Locale$LanguageRange)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "FilteringMode", make_descriptor(&PY_TYPE_DEF(Locale$FilteringMode)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "Category", make_descriptor(&PY_TYPE_DEF(Locale$Category)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "IsoCountryCode", make_descriptor(&PY_TYPE_DEF(Locale$IsoCountryCode)));
    }

    void t_Locale::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "class_", make_descriptor(Locale::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "wrapfn_", make_descriptor(t_Locale::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "boxfn_", make_descriptor(boxObject));
      env->getClass(Locale::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "CANADA", make_descriptor(t_Locale::wrap_Object(*Locale::CANADA)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "CANADA_FRENCH", make_descriptor(t_Locale::wrap_Object(*Locale::CANADA_FRENCH)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "CHINA", make_descriptor(t_Locale::wrap_Object(*Locale::CHINA)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "CHINESE", make_descriptor(t_Locale::wrap_Object(*Locale::CHINESE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "ENGLISH", make_descriptor(t_Locale::wrap_Object(*Locale::ENGLISH)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "FRANCE", make_descriptor(t_Locale::wrap_Object(*Locale::FRANCE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "FRENCH", make_descriptor(t_Locale::wrap_Object(*Locale::FRENCH)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "GERMAN", make_descriptor(t_Locale::wrap_Object(*Locale::GERMAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "GERMANY", make_descriptor(t_Locale::wrap_Object(*Locale::GERMANY)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "ITALIAN", make_descriptor(t_Locale::wrap_Object(*Locale::ITALIAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "ITALY", make_descriptor(t_Locale::wrap_Object(*Locale::ITALY)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "JAPAN", make_descriptor(t_Locale::wrap_Object(*Locale::JAPAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "JAPANESE", make_descriptor(t_Locale::wrap_Object(*Locale::JAPANESE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "KOREA", make_descriptor(t_Locale::wrap_Object(*Locale::KOREA)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "KOREAN", make_descriptor(t_Locale::wrap_Object(*Locale::KOREAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "PRC", make_descriptor(t_Locale::wrap_Object(*Locale::PRC)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "PRIVATE_USE_EXTENSION", make_descriptor(Locale::PRIVATE_USE_EXTENSION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "ROOT", make_descriptor(t_Locale::wrap_Object(*Locale::ROOT)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "SIMPLIFIED_CHINESE", make_descriptor(t_Locale::wrap_Object(*Locale::SIMPLIFIED_CHINESE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "TAIWAN", make_descriptor(t_Locale::wrap_Object(*Locale::TAIWAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "TRADITIONAL_CHINESE", make_descriptor(t_Locale::wrap_Object(*Locale::TRADITIONAL_CHINESE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "UK", make_descriptor(t_Locale::wrap_Object(*Locale::UK)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "UNICODE_LOCALE_EXTENSION", make_descriptor(Locale::UNICODE_LOCALE_EXTENSION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "US", make_descriptor(t_Locale::wrap_Object(*Locale::US)));
    }

    static PyObject *t_Locale_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Locale::initializeClass, 1)))
        return NULL;
      return t_Locale::wrap_Object(Locale(((t_Locale *) arg)->object.this$));
    }
    static PyObject *t_Locale_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Locale::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Locale_init_(t_Locale *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Locale object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Locale(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          Locale object((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            INT_CALL(object = Locale(a0, a1));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          Locale object((jobject) NULL);

          if (!parseArgs(args, "sss", &a0, &a1, &a2))
          {
            INT_CALL(object = Locale(a0, a1, a2));
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

    static PyObject *t_Locale_clone(t_Locale *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Locale_equals(t_Locale *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Locale), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Locale_filter(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::filter(a0, a1));
            return ::java::util::t_List::wrap_Object(result, ::java::util::PY_TYPE(Locale));
          }
        }
        break;
       case 3:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::Locale$FilteringMode a2((jobject) NULL);
          PyTypeObject **p2;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, ::java::util::Locale$FilteringMode::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_, &a2, &p2, ::java::util::t_Locale$FilteringMode::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::filter(a0, a1, a2));
            return ::java::util::t_List::wrap_Object(result, ::java::util::PY_TYPE(Locale));
          }
        }
      }

      PyErr_SetArgsError(type, "filter", args);
      return NULL;
    }

    static PyObject *t_Locale_filterTags(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::filterTags(a0, a1));
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }
        }
        break;
       case 3:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::Locale$FilteringMode a2((jobject) NULL);
          PyTypeObject **p2;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, ::java::util::Locale$FilteringMode::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_, &a2, &p2, ::java::util::t_Locale$FilteringMode::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::filterTags(a0, a1, a2));
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }
        }
      }

      PyErr_SetArgsError(type, "filterTags", args);
      return NULL;
    }

    static PyObject *t_Locale_forLanguageTag(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Locale result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::util::Locale::forLanguageTag(a0));
        return t_Locale::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "forLanguageTag", arg);
      return NULL;
    }

    static PyObject *t_Locale_getAvailableLocales(PyTypeObject *type)
    {
      JArray< Locale > result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Locale::getAvailableLocales());
      return JArray<jobject>(result.this$).wrap(t_Locale::wrap_jobject);
    }

    static PyObject *t_Locale_getCountry(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCountry());
      return j2p(result);
    }

    static PyObject *t_Locale_getDefault(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Locale result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Locale::getDefault());
          return t_Locale::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale$Category a0((jobject) NULL);
          PyTypeObject **p0;
          Locale result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Locale$Category::initializeClass, &a0, &p0, ::java::util::t_Locale$Category::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::getDefault(a0));
            return t_Locale::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getDefault", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayCountry(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayCountry());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayCountry(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayCountry", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayLanguage(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayLanguage());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayLanguage(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayLanguage", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayName(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayName());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayName(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayName", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayScript(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayScript());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayScript(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayScript", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayVariant(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayVariant());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayVariant(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayVariant", args);
      return NULL;
    }

    static PyObject *t_Locale_getExtension(t_Locale *self, PyObject *arg)
    {
      jchar a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = self->object.getExtension(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getExtension", arg);
      return NULL;
    }

    static PyObject *t_Locale_getExtensionKeys(t_Locale *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.getExtensionKeys());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(Character));
    }

    static PyObject *t_Locale_getISO3Country(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getISO3Country());
      return j2p(result);
    }

    static PyObject *t_Locale_getISO3Language(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getISO3Language());
      return j2p(result);
    }

    static PyObject *t_Locale_getISOCountries(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Locale::getISOCountries());
          return JArray<jstring>(result.this$).wrap();
        }
        break;
       case 1:
        {
          ::java::util::Locale$IsoCountryCode a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Set result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Locale$IsoCountryCode::initializeClass, &a0, &p0, ::java::util::t_Locale$IsoCountryCode::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::getISOCountries(a0));
            return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }
        }
      }

      PyErr_SetArgsError(type, "getISOCountries", args);
      return NULL;
    }

    static PyObject *t_Locale_getISOLanguages(PyTypeObject *type)
    {
      JArray< ::java::lang::String > result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Locale::getISOLanguages());
      return JArray<jstring>(result.this$).wrap();
    }

    static PyObject *t_Locale_getLanguage(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getLanguage());
      return j2p(result);
    }

    static PyObject *t_Locale_getScript(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getScript());
      return j2p(result);
    }

    static PyObject *t_Locale_getUnicodeLocaleAttributes(t_Locale *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.getUnicodeLocaleAttributes());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_Locale_getUnicodeLocaleKeys(t_Locale *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.getUnicodeLocaleKeys());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_Locale_getUnicodeLocaleType(t_Locale *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getUnicodeLocaleType(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getUnicodeLocaleType", arg);
      return NULL;
    }

    static PyObject *t_Locale_getVariant(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getVariant());
      return j2p(result);
    }

    static PyObject *t_Locale_hasExtensions(t_Locale *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.hasExtensions());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Locale_hashCode(t_Locale *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Locale), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Locale_lookup(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Collection a1((jobject) NULL);
      PyTypeObject **p1;
      Locale result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Locale::lookup(a0, a1));
        return t_Locale::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "lookup", args);
      return NULL;
    }

    static PyObject *t_Locale_lookupTag(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Collection a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Locale::lookupTag(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "lookupTag", args);
      return NULL;
    }

    static PyObject *t_Locale_setDefault(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          Locale a0((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(::java::util::Locale::setDefault(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          ::java::util::Locale$Category a0((jobject) NULL);
          PyTypeObject **p0;
          Locale a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::Locale$Category::initializeClass, Locale::initializeClass, &a0, &p0, ::java::util::t_Locale$Category::parameters_, &a1))
          {
            OBJ_CALL(::java::util::Locale::setDefault(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "setDefault", args);
      return NULL;
    }

    static PyObject *t_Locale_stripExtensions(t_Locale *self)
    {
      Locale result((jobject) NULL);
      OBJ_CALL(result = self->object.stripExtensions());
      return t_Locale::wrap_Object(result);
    }

    static PyObject *t_Locale_toLanguageTag(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toLanguageTag());
      return j2p(result);
    }

    static PyObject *t_Locale_toString(t_Locale *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Locale), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Locale_get__availableLocales(t_Locale *self, void *data)
    {
      JArray< Locale > value((jobject) NULL);
      OBJ_CALL(value = self->object.getAvailableLocales());
      return JArray<jobject>(value.this$).wrap(t_Locale::wrap_jobject);
    }

    static PyObject *t_Locale_get__country(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCountry());
      return j2p(value);
    }

    static PyObject *t_Locale_get__default(t_Locale *self, void *data)
    {
      Locale value((jobject) NULL);
      OBJ_CALL(value = self->object.getDefault());
      return t_Locale::wrap_Object(value);
    }
    static int t_Locale_set__default(t_Locale *self, PyObject *arg, void *data)
    {
      {
        Locale value((jobject) NULL);
        if (!parseArg(arg, "k", Locale::initializeClass, &value))
        {
          INT_CALL(self->object.setDefault(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "default", arg);
      return -1;
    }

    static PyObject *t_Locale_get__displayCountry(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayCountry());
      return j2p(value);
    }

    static PyObject *t_Locale_get__displayLanguage(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayLanguage());
      return j2p(value);
    }

    static PyObject *t_Locale_get__displayName(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayName());
      return j2p(value);
    }

    static PyObject *t_Locale_get__displayScript(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayScript());
      return j2p(value);
    }

    static PyObject *t_Locale_get__displayVariant(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayVariant());
      return j2p(value);
    }

    static PyObject *t_Locale_get__extensionKeys(t_Locale *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getExtensionKeys());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_Locale_get__iSO3Country(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getISO3Country());
      return j2p(value);
    }

    static PyObject *t_Locale_get__iSO3Language(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getISO3Language());
      return j2p(value);
    }

    static PyObject *t_Locale_get__iSOCountries(t_Locale *self, void *data)
    {
      JArray< ::java::lang::String > value((jobject) NULL);
      OBJ_CALL(value = self->object.getISOCountries());
      return JArray<jstring>(value.this$).wrap();
    }

    static PyObject *t_Locale_get__iSOLanguages(t_Locale *self, void *data)
    {
      JArray< ::java::lang::String > value((jobject) NULL);
      OBJ_CALL(value = self->object.getISOLanguages());
      return JArray<jstring>(value.this$).wrap();
    }

    static PyObject *t_Locale_get__language(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getLanguage());
      return j2p(value);
    }

    static PyObject *t_Locale_get__script(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getScript());
      return j2p(value);
    }

    static PyObject *t_Locale_get__unicodeLocaleAttributes(t_Locale *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getUnicodeLocaleAttributes());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_Locale_get__unicodeLocaleKeys(t_Locale *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getUnicodeLocaleKeys());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_Locale_get__variant(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getVariant());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonDataFilter.h"
#include "java/io/IOException.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Throwable.h"
#include "org/orekit/data/DataFilter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonDataFilter::class$ = NULL;
      jmethodID *PythonDataFilter::mids$ = NULL;
      bool PythonDataFilter::live$ = false;

      jclass PythonDataFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonDataFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_filter_446488bfc679a21b] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDataFilter::PythonDataFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonDataFilter::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonDataFilter::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonDataFilter::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonDataFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDataFilter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDataFilter_init_(t_PythonDataFilter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDataFilter_finalize(t_PythonDataFilter *self);
      static PyObject *t_PythonDataFilter_pythonExtension(t_PythonDataFilter *self, PyObject *args);
      static jobject JNICALL t_PythonDataFilter_filter0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonDataFilter_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonDataFilter_get__self(t_PythonDataFilter *self, void *data);
      static PyGetSetDef t_PythonDataFilter__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDataFilter, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDataFilter__methods_[] = {
        DECLARE_METHOD(t_PythonDataFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataFilter, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDataFilter, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDataFilter)[] = {
        { Py_tp_methods, t_PythonDataFilter__methods_ },
        { Py_tp_init, (void *) t_PythonDataFilter_init_ },
        { Py_tp_getset, t_PythonDataFilter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDataFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDataFilter, t_PythonDataFilter, PythonDataFilter);

      void t_PythonDataFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDataFilter), &PY_TYPE_DEF(PythonDataFilter), module, "PythonDataFilter", 1);
      }

      void t_PythonDataFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataFilter), "class_", make_descriptor(PythonDataFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataFilter), "wrapfn_", make_descriptor(t_PythonDataFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataFilter), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDataFilter::initializeClass);
        JNINativeMethod methods[] = {
          { "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;", (void *) t_PythonDataFilter_filter0 },
          { "pythonDecRef", "()V", (void *) t_PythonDataFilter_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonDataFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDataFilter::initializeClass, 1)))
          return NULL;
        return t_PythonDataFilter::wrap_Object(PythonDataFilter(((t_PythonDataFilter *) arg)->object.this$));
      }
      static PyObject *t_PythonDataFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDataFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDataFilter_init_(t_PythonDataFilter *self, PyObject *args, PyObject *kwds)
      {
        PythonDataFilter object((jobject) NULL);

        INT_CALL(object = PythonDataFilter());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDataFilter_finalize(t_PythonDataFilter *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDataFilter_pythonExtension(t_PythonDataFilter *self, PyObject *args)
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

      static jobject JNICALL t_PythonDataFilter_filter0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataFilter::mids$[PythonDataFilter::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::data::DataSource value((jobject) NULL);
        PyObject *o0 = ::org::orekit::data::t_DataSource::wrap_Object(::org::orekit::data::DataSource(a0));
        PyObject *result = PyObject_CallMethod(obj, "filter", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::data::DataSource::initializeClass, &value))
        {
          throwTypeError("filter", result);
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

      static void JNICALL t_PythonDataFilter_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataFilter::mids$[PythonDataFilter::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDataFilter::mids$[PythonDataFilter::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonDataFilter_get__self(t_PythonDataFilter *self, void *data)
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/summary/SumOfLogs.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/summary/SumOfLogs.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {

          ::java::lang::Class *SumOfLogs::class$ = NULL;
          jmethodID *SumOfLogs::mids$ = NULL;
          bool SumOfLogs::live$ = false;

          jclass SumOfLogs::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/summary/SumOfLogs");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_2808634b771b9a30] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/summary/SumOfLogs;)V");
              mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_c65cfae1cb3df553] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/summary/SumOfLogs;");
              mids$[mid_evaluate_0a7ff474793a505a] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_456d9a2f64d6b28d] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_77e0f9a1f260e2e5] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SumOfLogs::SumOfLogs() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void SumOfLogs::aggregate(const SumOfLogs & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_2808634b771b9a30], a0.this$);
          }

          void SumOfLogs::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
          }

          SumOfLogs SumOfLogs::copy() const
          {
            return SumOfLogs(env->callObjectMethod(this$, mids$[mid_copy_c65cfae1cb3df553]));
          }

          jdouble SumOfLogs::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0a7ff474793a505a], a0.this$, a1, a2);
          }

          jlong SumOfLogs::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
          }

          jdouble SumOfLogs::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_456d9a2f64d6b28d]);
          }

          void SumOfLogs::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_77e0f9a1f260e2e5], a0);
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
    namespace stat {
      namespace descriptive {
        namespace summary {
          static PyObject *t_SumOfLogs_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SumOfLogs_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SumOfLogs_init_(t_SumOfLogs *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SumOfLogs_aggregate(t_SumOfLogs *self, PyObject *arg);
          static PyObject *t_SumOfLogs_clear(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_copy(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_evaluate(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_getN(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_getResult(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_increment(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_get__n(t_SumOfLogs *self, void *data);
          static PyObject *t_SumOfLogs_get__result(t_SumOfLogs *self, void *data);
          static PyGetSetDef t_SumOfLogs__fields_[] = {
            DECLARE_GET_FIELD(t_SumOfLogs, n),
            DECLARE_GET_FIELD(t_SumOfLogs, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SumOfLogs__methods_[] = {
            DECLARE_METHOD(t_SumOfLogs, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SumOfLogs, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SumOfLogs, aggregate, METH_O),
            DECLARE_METHOD(t_SumOfLogs, clear, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, copy, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, getN, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, getResult, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SumOfLogs)[] = {
            { Py_tp_methods, t_SumOfLogs__methods_ },
            { Py_tp_init, (void *) t_SumOfLogs_init_ },
            { Py_tp_getset, t_SumOfLogs__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SumOfLogs)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(SumOfLogs, t_SumOfLogs, SumOfLogs);

          void t_SumOfLogs::install(PyObject *module)
          {
            installType(&PY_TYPE(SumOfLogs), &PY_TYPE_DEF(SumOfLogs), module, "SumOfLogs", 0);
          }

          void t_SumOfLogs::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfLogs), "class_", make_descriptor(SumOfLogs::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfLogs), "wrapfn_", make_descriptor(t_SumOfLogs::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfLogs), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SumOfLogs_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SumOfLogs::initializeClass, 1)))
              return NULL;
            return t_SumOfLogs::wrap_Object(SumOfLogs(((t_SumOfLogs *) arg)->object.this$));
          }
          static PyObject *t_SumOfLogs_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SumOfLogs::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SumOfLogs_init_(t_SumOfLogs *self, PyObject *args, PyObject *kwds)
          {
            SumOfLogs object((jobject) NULL);

            INT_CALL(object = SumOfLogs());
            self->object = object;

            return 0;
          }

          static PyObject *t_SumOfLogs_aggregate(t_SumOfLogs *self, PyObject *arg)
          {
            SumOfLogs a0((jobject) NULL);

            if (!parseArg(arg, "k", SumOfLogs::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_SumOfLogs_clear(t_SumOfLogs *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_SumOfLogs_copy(t_SumOfLogs *self, PyObject *args)
          {
            SumOfLogs result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_SumOfLogs::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_SumOfLogs_evaluate(t_SumOfLogs *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_SumOfLogs_getN(t_SumOfLogs *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_SumOfLogs_getResult(t_SumOfLogs *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_SumOfLogs_increment(t_SumOfLogs *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_SumOfLogs_get__n(t_SumOfLogs *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_SumOfLogs_get__result(t_SumOfLogs *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/section/RinexLabels.h"
#include "org/orekit/files/rinex/section/RinexLabels.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace section {

          ::java::lang::Class *RinexLabels::class$ = NULL;
          jmethodID *RinexLabels::mids$ = NULL;
          bool RinexLabels::live$ = false;
          RinexLabels *RinexLabels::ANTENNA_B_SIGHT_XYZ = NULL;
          RinexLabels *RinexLabels::ANTENNA_DELTA_H_E_N = NULL;
          RinexLabels *RinexLabels::ANTENNA_DELTA_X_Y_Z = NULL;
          RinexLabels *RinexLabels::ANTENNA_PHASE_CENTER = NULL;
          RinexLabels *RinexLabels::ANTENNA_ZERODIR_AZI = NULL;
          RinexLabels *RinexLabels::ANTENNA_ZERODIR_XYZ = NULL;
          RinexLabels *RinexLabels::ANT_NB_TYPE = NULL;
          RinexLabels *RinexLabels::APPROX_POSITION_XYZ = NULL;
          RinexLabels *RinexLabels::CENTER_OF_MASS_XYZ = NULL;
          RinexLabels *RinexLabels::COMMENT = NULL;
          RinexLabels *RinexLabels::DOI = NULL;
          RinexLabels *RinexLabels::END = NULL;
          RinexLabels *RinexLabels::GLONASS_COD_PHS_BIS = NULL;
          RinexLabels *RinexLabels::GLONASS_SLOT_FRQ_NB = NULL;
          RinexLabels *RinexLabels::INTERVAL = NULL;
          RinexLabels *RinexLabels::LEAP_SECONDS = NULL;
          RinexLabels *RinexLabels::LICENSE = NULL;
          RinexLabels *RinexLabels::MARKER_NAME = NULL;
          RinexLabels *RinexLabels::MARKER_NUMBER = NULL;
          RinexLabels *RinexLabels::MARKER_TYPE = NULL;
          RinexLabels *RinexLabels::NB_OF_SATELLITES = NULL;
          RinexLabels *RinexLabels::NB_TYPES_OF_OBSERV = NULL;
          RinexLabels *RinexLabels::OBSERVER_AGENCY = NULL;
          RinexLabels *RinexLabels::OBS_SCALE_FACTOR = NULL;
          RinexLabels *RinexLabels::PRN_NB_OF_OBS = NULL;
          RinexLabels *RinexLabels::PROGRAM = NULL;
          RinexLabels *RinexLabels::RCV_CLOCK_OFFS_APPL = NULL;
          RinexLabels *RinexLabels::REC_NB_TYPE_VERS = NULL;
          RinexLabels *RinexLabels::SIGNAL_STRENGTH_UNIT = NULL;
          RinexLabels *RinexLabels::STATION_INFORMATION = NULL;
          RinexLabels *RinexLabels::SYS_DCBS_APPLIED = NULL;
          RinexLabels *RinexLabels::SYS_NB_TYPES_OF_OBSERV = NULL;
          RinexLabels *RinexLabels::SYS_PCVS_APPLIED = NULL;
          RinexLabels *RinexLabels::SYS_PHASE_SHIFT = NULL;
          RinexLabels *RinexLabels::SYS_SCALE_FACTOR = NULL;
          RinexLabels *RinexLabels::TIME_OF_FIRST_OBS = NULL;
          RinexLabels *RinexLabels::TIME_OF_LAST_OBS = NULL;
          RinexLabels *RinexLabels::VERSION = NULL;
          RinexLabels *RinexLabels::WAVELENGTH_FACT_L1_2 = NULL;

          jclass RinexLabels::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/section/RinexLabels");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getLabel_0090f7797e403f43] = env->getMethodID(cls, "getLabel", "()Ljava/lang/String;");
              mids$[mid_matches_6b161f495ea569b8] = env->getMethodID(cls, "matches", "(Ljava/lang/String;)Z");
              mids$[mid_valueOf_b50a11a1103d6533] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/section/RinexLabels;");
              mids$[mid_values_21fe9b855e80bf89] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/section/RinexLabels;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              ANTENNA_B_SIGHT_XYZ = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_B_SIGHT_XYZ", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANTENNA_DELTA_H_E_N = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_DELTA_H_E_N", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANTENNA_DELTA_X_Y_Z = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_DELTA_X_Y_Z", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANTENNA_PHASE_CENTER = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_PHASE_CENTER", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANTENNA_ZERODIR_AZI = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_ZERODIR_AZI", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANTENNA_ZERODIR_XYZ = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_ZERODIR_XYZ", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANT_NB_TYPE = new RinexLabels(env->getStaticObjectField(cls, "ANT_NB_TYPE", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              APPROX_POSITION_XYZ = new RinexLabels(env->getStaticObjectField(cls, "APPROX_POSITION_XYZ", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              CENTER_OF_MASS_XYZ = new RinexLabels(env->getStaticObjectField(cls, "CENTER_OF_MASS_XYZ", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              COMMENT = new RinexLabels(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              DOI = new RinexLabels(env->getStaticObjectField(cls, "DOI", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              END = new RinexLabels(env->getStaticObjectField(cls, "END", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              GLONASS_COD_PHS_BIS = new RinexLabels(env->getStaticObjectField(cls, "GLONASS_COD_PHS_BIS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              GLONASS_SLOT_FRQ_NB = new RinexLabels(env->getStaticObjectField(cls, "GLONASS_SLOT_FRQ_NB", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              INTERVAL = new RinexLabels(env->getStaticObjectField(cls, "INTERVAL", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              LEAP_SECONDS = new RinexLabels(env->getStaticObjectField(cls, "LEAP_SECONDS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              LICENSE = new RinexLabels(env->getStaticObjectField(cls, "LICENSE", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              MARKER_NAME = new RinexLabels(env->getStaticObjectField(cls, "MARKER_NAME", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              MARKER_NUMBER = new RinexLabels(env->getStaticObjectField(cls, "MARKER_NUMBER", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              MARKER_TYPE = new RinexLabels(env->getStaticObjectField(cls, "MARKER_TYPE", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              NB_OF_SATELLITES = new RinexLabels(env->getStaticObjectField(cls, "NB_OF_SATELLITES", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              NB_TYPES_OF_OBSERV = new RinexLabels(env->getStaticObjectField(cls, "NB_TYPES_OF_OBSERV", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              OBSERVER_AGENCY = new RinexLabels(env->getStaticObjectField(cls, "OBSERVER_AGENCY", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              OBS_SCALE_FACTOR = new RinexLabels(env->getStaticObjectField(cls, "OBS_SCALE_FACTOR", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              PRN_NB_OF_OBS = new RinexLabels(env->getStaticObjectField(cls, "PRN_NB_OF_OBS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              PROGRAM = new RinexLabels(env->getStaticObjectField(cls, "PROGRAM", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              RCV_CLOCK_OFFS_APPL = new RinexLabels(env->getStaticObjectField(cls, "RCV_CLOCK_OFFS_APPL", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              REC_NB_TYPE_VERS = new RinexLabels(env->getStaticObjectField(cls, "REC_NB_TYPE_VERS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SIGNAL_STRENGTH_UNIT = new RinexLabels(env->getStaticObjectField(cls, "SIGNAL_STRENGTH_UNIT", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              STATION_INFORMATION = new RinexLabels(env->getStaticObjectField(cls, "STATION_INFORMATION", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SYS_DCBS_APPLIED = new RinexLabels(env->getStaticObjectField(cls, "SYS_DCBS_APPLIED", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SYS_NB_TYPES_OF_OBSERV = new RinexLabels(env->getStaticObjectField(cls, "SYS_NB_TYPES_OF_OBSERV", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SYS_PCVS_APPLIED = new RinexLabels(env->getStaticObjectField(cls, "SYS_PCVS_APPLIED", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SYS_PHASE_SHIFT = new RinexLabels(env->getStaticObjectField(cls, "SYS_PHASE_SHIFT", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SYS_SCALE_FACTOR = new RinexLabels(env->getStaticObjectField(cls, "SYS_SCALE_FACTOR", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              TIME_OF_FIRST_OBS = new RinexLabels(env->getStaticObjectField(cls, "TIME_OF_FIRST_OBS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              TIME_OF_LAST_OBS = new RinexLabels(env->getStaticObjectField(cls, "TIME_OF_LAST_OBS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              VERSION = new RinexLabels(env->getStaticObjectField(cls, "VERSION", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              WAVELENGTH_FACT_L1_2 = new RinexLabels(env->getStaticObjectField(cls, "WAVELENGTH_FACT_L1_2", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String RinexLabels::getLabel() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLabel_0090f7797e403f43]));
          }

          jboolean RinexLabels::matches(const ::java::lang::String & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_matches_6b161f495ea569b8], a0.this$);
          }

          RinexLabels RinexLabels::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexLabels(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b50a11a1103d6533], a0.this$));
          }

          JArray< RinexLabels > RinexLabels::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RinexLabels >(env->callStaticObjectMethod(cls, mids$[mid_values_21fe9b855e80bf89]));
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
      namespace rinex {
        namespace section {
          static PyObject *t_RinexLabels_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexLabels_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexLabels_of_(t_RinexLabels *self, PyObject *args);
          static PyObject *t_RinexLabels_getLabel(t_RinexLabels *self);
          static PyObject *t_RinexLabels_matches(t_RinexLabels *self, PyObject *arg);
          static PyObject *t_RinexLabels_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RinexLabels_values(PyTypeObject *type);
          static PyObject *t_RinexLabels_get__label(t_RinexLabels *self, void *data);
          static PyObject *t_RinexLabels_get__parameters_(t_RinexLabels *self, void *data);
          static PyGetSetDef t_RinexLabels__fields_[] = {
            DECLARE_GET_FIELD(t_RinexLabels, label),
            DECLARE_GET_FIELD(t_RinexLabels, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexLabels__methods_[] = {
            DECLARE_METHOD(t_RinexLabels, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexLabels, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexLabels, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexLabels, getLabel, METH_NOARGS),
            DECLARE_METHOD(t_RinexLabels, matches, METH_O),
            DECLARE_METHOD(t_RinexLabels, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RinexLabels, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexLabels)[] = {
            { Py_tp_methods, t_RinexLabels__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RinexLabels__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexLabels)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RinexLabels, t_RinexLabels, RinexLabels);
          PyObject *t_RinexLabels::wrap_Object(const RinexLabels& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexLabels::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexLabels *self = (t_RinexLabels *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexLabels::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexLabels::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexLabels *self = (t_RinexLabels *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexLabels::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexLabels), &PY_TYPE_DEF(RinexLabels), module, "RinexLabels", 0);
          }

          void t_RinexLabels::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "class_", make_descriptor(RinexLabels::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "wrapfn_", make_descriptor(t_RinexLabels::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "boxfn_", make_descriptor(boxObject));
            env->getClass(RinexLabels::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_B_SIGHT_XYZ", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_B_SIGHT_XYZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_DELTA_H_E_N", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_DELTA_H_E_N)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_DELTA_X_Y_Z", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_DELTA_X_Y_Z)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_PHASE_CENTER", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_PHASE_CENTER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_ZERODIR_AZI", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_ZERODIR_AZI)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_ZERODIR_XYZ", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_ZERODIR_XYZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANT_NB_TYPE", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANT_NB_TYPE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "APPROX_POSITION_XYZ", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::APPROX_POSITION_XYZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "CENTER_OF_MASS_XYZ", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::CENTER_OF_MASS_XYZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "COMMENT", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::COMMENT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "DOI", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::DOI)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "END", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::END)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "GLONASS_COD_PHS_BIS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::GLONASS_COD_PHS_BIS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "GLONASS_SLOT_FRQ_NB", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::GLONASS_SLOT_FRQ_NB)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "INTERVAL", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::INTERVAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "LEAP_SECONDS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::LEAP_SECONDS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "LICENSE", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::LICENSE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "MARKER_NAME", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::MARKER_NAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "MARKER_NUMBER", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::MARKER_NUMBER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "MARKER_TYPE", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::MARKER_TYPE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "NB_OF_SATELLITES", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::NB_OF_SATELLITES)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "NB_TYPES_OF_OBSERV", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::NB_TYPES_OF_OBSERV)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "OBSERVER_AGENCY", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::OBSERVER_AGENCY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "OBS_SCALE_FACTOR", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::OBS_SCALE_FACTOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "PRN_NB_OF_OBS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::PRN_NB_OF_OBS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "PROGRAM", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::PROGRAM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "RCV_CLOCK_OFFS_APPL", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::RCV_CLOCK_OFFS_APPL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "REC_NB_TYPE_VERS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::REC_NB_TYPE_VERS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SIGNAL_STRENGTH_UNIT", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SIGNAL_STRENGTH_UNIT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "STATION_INFORMATION", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::STATION_INFORMATION)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SYS_DCBS_APPLIED", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SYS_DCBS_APPLIED)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SYS_NB_TYPES_OF_OBSERV", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SYS_NB_TYPES_OF_OBSERV)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SYS_PCVS_APPLIED", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SYS_PCVS_APPLIED)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SYS_PHASE_SHIFT", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SYS_PHASE_SHIFT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SYS_SCALE_FACTOR", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SYS_SCALE_FACTOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "TIME_OF_FIRST_OBS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::TIME_OF_FIRST_OBS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "TIME_OF_LAST_OBS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::TIME_OF_LAST_OBS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "VERSION", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::VERSION)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "WAVELENGTH_FACT_L1_2", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::WAVELENGTH_FACT_L1_2)));
          }

          static PyObject *t_RinexLabels_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexLabels::initializeClass, 1)))
              return NULL;
            return t_RinexLabels::wrap_Object(RinexLabels(((t_RinexLabels *) arg)->object.this$));
          }
          static PyObject *t_RinexLabels_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexLabels::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexLabels_of_(t_RinexLabels *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RinexLabels_getLabel(t_RinexLabels *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLabel());
            return j2p(result);
          }

          static PyObject *t_RinexLabels_matches(t_RinexLabels *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = self->object.matches(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "matches", arg);
            return NULL;
          }

          static PyObject *t_RinexLabels_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexLabels result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::section::RinexLabels::valueOf(a0));
              return t_RinexLabels::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RinexLabels_values(PyTypeObject *type)
          {
            JArray< RinexLabels > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::section::RinexLabels::values());
            return JArray<jobject>(result.this$).wrap(t_RinexLabels::wrap_jobject);
          }
          static PyObject *t_RinexLabels_get__parameters_(t_RinexLabels *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RinexLabels_get__label(t_RinexLabels *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLabel());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SymmLQ.h"
#include "org/hipparchus/util/IterationManager.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SymmLQ::class$ = NULL;
      jmethodID *SymmLQ::mids$ = NULL;
      bool SymmLQ::live$ = false;

      jclass SymmLQ::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SymmLQ");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_18b5cf63963cf251] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/IterationManager;DZ)V");
          mids$[mid_init$_726464cbb7d28c95] = env->getMethodID(cls, "<init>", "(IDZ)V");
          mids$[mid_shouldCheck_e470b6d9e0d979db] = env->getMethodID(cls, "shouldCheck", "()Z");
          mids$[mid_solve_2d301f1e49d9c390] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_52b5cc8d60bfdcba] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_55921fcd14d39e3f] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_914768267c38d49b] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_7129fd492c2677ca] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;ZD)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_27ec190a99061256] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;ZD)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_52b5cc8d60bfdcba] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_914768267c38d49b] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_ed0d1fdc241de043] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;ZD)Lorg/hipparchus/linear/RealVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SymmLQ::SymmLQ(const ::org::hipparchus::util::IterationManager & a0, jdouble a1, jboolean a2) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_18b5cf63963cf251, a0.this$, a1, a2)) {}

      SymmLQ::SymmLQ(jint a0, jdouble a1, jboolean a2) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_726464cbb7d28c95, a0, a1, a2)) {}

      jboolean SymmLQ::shouldCheck() const
      {
        return env->callBooleanMethod(this$, mids$[mid_shouldCheck_e470b6d9e0d979db]);
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_2d301f1e49d9c390], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_52b5cc8d60bfdcba], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_55921fcd14d39e3f], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_914768267c38d49b], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, jboolean a2, jdouble a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_7129fd492c2677ca], a0.this$, a1.this$, a2, a3));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, jboolean a3, jdouble a4) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_27ec190a99061256], a0.this$, a1.this$, a2.this$, a3, a4));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_52b5cc8d60bfdcba], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_914768267c38d49b], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3, jboolean a4, jdouble a5) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_ed0d1fdc241de043], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
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
      static PyObject *t_SymmLQ_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SymmLQ_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SymmLQ_init_(t_SymmLQ *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SymmLQ_shouldCheck(t_SymmLQ *self);
      static PyObject *t_SymmLQ_solve(t_SymmLQ *self, PyObject *args);
      static PyObject *t_SymmLQ_solveInPlace(t_SymmLQ *self, PyObject *args);

      static PyMethodDef t_SymmLQ__methods_[] = {
        DECLARE_METHOD(t_SymmLQ, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SymmLQ, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SymmLQ, shouldCheck, METH_NOARGS),
        DECLARE_METHOD(t_SymmLQ, solve, METH_VARARGS),
        DECLARE_METHOD(t_SymmLQ, solveInPlace, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SymmLQ)[] = {
        { Py_tp_methods, t_SymmLQ__methods_ },
        { Py_tp_init, (void *) t_SymmLQ_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SymmLQ)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::PreconditionedIterativeLinearSolver),
        NULL
      };

      DEFINE_TYPE(SymmLQ, t_SymmLQ, SymmLQ);

      void t_SymmLQ::install(PyObject *module)
      {
        installType(&PY_TYPE(SymmLQ), &PY_TYPE_DEF(SymmLQ), module, "SymmLQ", 0);
      }

      void t_SymmLQ::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SymmLQ), "class_", make_descriptor(SymmLQ::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SymmLQ), "wrapfn_", make_descriptor(t_SymmLQ::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SymmLQ), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SymmLQ_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SymmLQ::initializeClass, 1)))
          return NULL;
        return t_SymmLQ::wrap_Object(SymmLQ(((t_SymmLQ *) arg)->object.this$));
      }
      static PyObject *t_SymmLQ_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SymmLQ::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SymmLQ_init_(t_SymmLQ *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::util::IterationManager a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            SymmLQ object((jobject) NULL);

            if (!parseArgs(args, "kDZ", ::org::hipparchus::util::IterationManager::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SymmLQ(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            jboolean a2;
            SymmLQ object((jobject) NULL);

            if (!parseArgs(args, "IDZ", &a0, &a1, &a2))
            {
              INT_CALL(object = SymmLQ(a0, a1, a2));
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

      static PyObject *t_SymmLQ_shouldCheck(t_SymmLQ *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.shouldCheck());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_SymmLQ_solve(t_SymmLQ *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.solve(a0, a1));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            jboolean a2;
            jdouble a3;
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkZD", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            jboolean a3;
            jdouble a4;
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkZD", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(SymmLQ), (PyObject *) self, "solve", args, 2);
      }

      static PyObject *t_SymmLQ_solveInPlace(t_SymmLQ *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            jboolean a4;
            jdouble a5;
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkkZD", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2, a3, a4, a5));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(SymmLQ), (PyObject *) self, "solveInPlace", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmHeader::class$ = NULL;
            jmethodID *AdmHeader::mids$ = NULL;
            bool AdmHeader::live$ = false;

            jclass AdmHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdmHeader::AdmHeader() : ::org::orekit::files::ccsds::section::Header(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}
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
          namespace adm {
            static PyObject *t_AdmHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdmHeader_init_(t_AdmHeader *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_AdmHeader__methods_[] = {
              DECLARE_METHOD(t_AdmHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmHeader, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmHeader)[] = {
              { Py_tp_methods, t_AdmHeader__methods_ },
              { Py_tp_init, (void *) t_AdmHeader_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmHeader)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Header),
              NULL
            };

            DEFINE_TYPE(AdmHeader, t_AdmHeader, AdmHeader);

            void t_AdmHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmHeader), &PY_TYPE_DEF(AdmHeader), module, "AdmHeader", 0);
            }

            void t_AdmHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmHeader), "class_", make_descriptor(AdmHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmHeader), "wrapfn_", make_descriptor(t_AdmHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdmHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmHeader::initializeClass, 1)))
                return NULL;
              return t_AdmHeader::wrap_Object(AdmHeader(((t_AdmHeader *) arg)->object.this$));
            }
            static PyObject *t_AdmHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdmHeader_init_(t_AdmHeader *self, PyObject *args, PyObject *kwds)
            {
              AdmHeader object((jobject) NULL);

              INT_CALL(object = AdmHeader());
              self->object = object;

              return 0;
            }
          }
        }
      }
    }
  }
}
